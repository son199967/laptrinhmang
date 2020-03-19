#include <stdio.h>
#include <stdlib.h>
#include<winsock2.h>
#include<ws2tcpip.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char link;
	//kiem tra chuoi hop le
	for(int i=0;i<strlen(link);i++){
		char c=link[i];
		if(  c>='A'  &&   c<='Z'  ||  c>='0'  &&  c<='9'  ||   c='.'   ||   c='-'){
 }else{
			printf("ten mien ko hop le");
			break;
		}
	}
	WSADATA wsa;
	if(WSAStartup(MAKEWORD(2,2),&wsa)){
		printf("creat fail");
	}else{
		printf("success");
	}
	addrinfo* info;
	SOCKADDR_IN addr;
	int ret=getaddrinfo(link,"http",NULL,&info);
	if(ret==0){
		memcpy(&addr,info->ai_addr,info->ai_addrlen);
		printf("dia chi da phan giai ten mien:\n ");
		printf("dia chi ip la: %s",inet_ntoa(addr.sin_addr));
	}else{
		printf("ten mien not found");
	}
	return 0;
}
