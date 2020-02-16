/*********************************************************************************************
**                                                                                          **
**                                 Jiedi(China nanjing)Ltd.                                 **
**	                          版权归夏曹俊所有，此代码作为学习参考                          **                                                                            **
*********************************************************************************************/

/*****************************    联系方式   *************************************************
** 购买课程的同学可以加群398872593咨询讨论网络编程技术问题，老师一有时间就会解答您的问题
** 加群请注明购买平台和购买账号，一般一天内就会审核通过
** 如果觉得课程内容对您有帮助，希望给出五星好评，并留下您的意见，我会根据您的意见调整修改课程
** Contact       : xiacaojun@qq.com
**        博客   : http://blog.csdn.net/jiedichina
**        QQ	 : 99981441
**		  QQ群	 ：398872593
**   微信公众号  : jiedi2007
**
********************************************************************************************/
#include "XHttpResponse.h"
#include <string>
#include <regex>
using namespace std;
bool XHttpResponse::SetRequest(std::string request)
{
	string src = request;
	// /   /index.html /ff
	string pattern = "^([A-Z]+) /([a-zA-Z0-9]*([.][a-zA-Z]*)?)[?]?(.*) HTTP/1";
	regex r(pattern);
	smatch mas;
	regex_search(src,mas,r);
	if(mas.size() == 0)
	{
		printf("%s failed!\n",pattern.c_str());
		return false ;
	}
	string type = mas[1];
	string path = "/";
	path += mas[2];
	string filetype = mas[3];
	string query = mas[4];

	if(type != "GET")
	{
		printf("Not GET!!!\n");
		return false;
	}
	string filename = path;
	if(path == "/")
	{
		filename = "/index.html";
	}
	
	string filepath = "www";
	filepath += filename;
	
	//php-cgi www/index.php id=1 name=xcj >  www/index.php.html
	if(filetype == "php")
	{
		string cmd = "php-cgi ";
		cmd += filepath;
		cmd += " ";
		//query id=1&name=xcj 
		// id=1 name=xcj
		for(int i =0; i< query.size(); i++)
		{
			if(query[i] == '&') query[i] = ' ';
		}
		cmd += query;
	
		cmd += " > ";
		filepath += ".html";
		cmd += filepath;
	
		//printf("%s\n",cmd.c_str());
		system(cmd.c_str());
	}
	
	
	fp = fopen(filepath.c_str(),"rb");
	if(fp == NULL)
	{
		printf("open file %s failed!\n",filepath.c_str());
		return false;
	}
	//获取文件大小
	fseek(fp,0,SEEK_END);
	filesize = ftell(fp);
	fseek(fp,0,0);
	//printf("file size is %d\n",filesize);
	
	if(filetype == "php")
	{
		char c = 0;
		//\r\n\r\n
		int headsize = 0;
		while(fread(&c,1,1,fp) > 0)
		{
			headsize++;
			if(c=='\r')
			{
				fseek(fp,3,SEEK_CUR);
				headsize += 3;
				break;
			}
		}
		filesize = filesize - headsize;
	}

	return true;
}
std::string XHttpResponse::GetHead()
{

	string rmsg = "";
	rmsg = "HTTP/1.1 200 OK\r\n";
	rmsg += "Server: XHttp\r\n";
	rmsg += "Content-Type: text/html\r\n";
	rmsg += "Content-Length: ";
	char bsize[128] = { 0 };
	sprintf(bsize, "%d", filesize);
	rmsg += bsize;
	//rmsg += 
	//rmsg += "10\r\n";
	rmsg += "\r\n\r\n";
	return rmsg;
}
int XHttpResponse::Read(char *buf, int bufsize)
{

	return fread(buf, 1, bufsize, fp);
}
XHttpResponse::XHttpResponse()
{
}


XHttpResponse::~XHttpResponse()
{
}
