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
#include "XUdp.h"
#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main(int argc,char *argv[])
{
	unsigned short port = 514;
	XUdp syslog;
	if (!syslog.Bind(port))
	{
		return -1;
	}
	char buf[2000] = { 0 };
	for (;;)
	{
		//接收linux发送的日志
		int len = syslog.Recv(buf, sizeof(buf));
		if (len <= 0)
		{
			continue;
		}
		buf[len] = '\0';
		//Failed password for xcj from 192.168.3.76 port 16939 ssh2
		string src = buf;
		string p = "Failed password for ([a-zA-Z0-9]+) from ([0-9.]+)";
		regex r(p);
		smatch mas;
		//分析日志内容
		regex_search(src, mas, r);
		if (mas.size() > 0)
		{
			cout << "Warning: User " << mas[1] << "@" << mas[2] << "login failed!" << endl;
		}
	}
	return 0;
}