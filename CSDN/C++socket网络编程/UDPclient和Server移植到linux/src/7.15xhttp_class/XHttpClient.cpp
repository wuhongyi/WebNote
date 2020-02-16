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
#include "XHttpClient.h"
#include <thread>
using namespace std;
bool XHttpClient::Start(XTcp client)
{
	this->client = client;
	thread sth(&XHttpClient::Main, this);
	sth.detach();
	return true;
}
void XHttpClient::Main()
{
	char buf[10240] = { 0 };
	for (;;)
	{
		int len = client.Recv(buf, sizeof(buf)-1);
		if (len <= 0)
		{
			break;
		}
		buf[len] = '\0';


		if (!res.SetRequest(buf))
		{
			break;
		}
		string head = res.GetHead();
		if (client.Send(head.c_str(), head.size())<=0)
		{
			break;
		}
		int size = sizeof(buf);
		bool error = false;
		for (;;)
		{
			int len = res.Read(buf, size);
			if (len < 0)
			{
				error = true;
				break;
			}
			if (len == 0) break;
			if (client.Send(buf, len) <= 0)
			{
				error = true;
				break;
			}
		}
	}
	client.Close();
	delete this;
}

XHttpClient::XHttpClient()
{
}


XHttpClient::~XHttpClient()
{
}
