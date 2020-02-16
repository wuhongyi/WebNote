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
#include <iostream>
using namespace std;
#ifdef WIN32
#include <windows.h>
#define socklen_t int
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <fcntl.h>
#define  closesocket close
#endif
int main(int argc, char *argv[])
{
	unsigned short port = 514;// 8080;
	if (argc > 1)
	{
		port = atoi(argv[1]);
	}
	#ifdef WIN32
	WSADATA ws;
	WSAStartup(MAKEWORD(2, 2), &ws);
	#endif
	int sock = socket(AF_INET, SOCK_DGRAM, 0);
	if (sock <= 0)
	{
		cout << "create socket failed!" << endl;
		return -1; 
	}
	sockaddr_in saddr;
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(port);
	saddr.sin_addr.s_addr = htonl(0);
	if (::bind(sock, (sockaddr*)&saddr, sizeof(saddr)) != 0)
	{
		cout << "bind port " << port << "failed!" << endl;
		return -2;
	}
	cout << "bind port " << port << "success!" << endl;
	listen(sock, 10);
	sockaddr_in client;
	socklen_t len = sizeof(client);
	char buf[10240] = { 0 };
	int re = recvfrom(sock, buf, sizeof(buf), 0, (sockaddr*)&client, &len);
	if (re <= 0)
	{
		cout << "recvFrom failed!" << endl;
		return -3;
	}
	cout << "recv " << inet_ntoa(client.sin_addr)<<":" << ntohs(client.sin_port) << endl;

	buf[re] = '\0';
	cout << buf << endl;
	sendto(sock, "67890", 5, 0, (sockaddr*)&client, sizeof(client));
	getchar();

	return 0;
}