#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    
   	char c[1000005]={0};
   	int n[1000005]={0};
   	
   	scanf("%s",c);
   	
   	int len=0;
   	for(int i=0;c[i]!=0;i++){
   		len++;
	}
	int ap=len%3;
	
	for(int i=0;c[i]!=0;i++){
		int num0=c[i]-48;\
		if(i==0&&ap!=0){
			if(ap==1){
				printf("%d",num0);
			}else if(ap==2){
				int num1=c[i+1]-48;
				printf("%d",num0*2+num1);i++;
			}
		}else{
			int num1=c[i+1]-48;
			int num2=c[i+2]-48;
			printf("%d",num0*4+num1*2+num2);
			i+=2;
		}
	}
	
    return 0; 
}

