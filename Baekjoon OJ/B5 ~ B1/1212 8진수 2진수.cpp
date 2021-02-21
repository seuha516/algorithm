#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	
	char c[400000]={0};
	for(int i=0;i<400000;i++){
		c[i]=-1;
	}
	
	scanf("%s",c);
	for(int i=0;c[i]>0;i++){
		int t=c[i]-48;
		if(t>=4){
			t-=4;
		}
		int a=(c[i]-48)/4;
		int b=t/2;
		int cc=(c[i]-48)%2;
		
		if(i==0){
			if(a==0){
				if(b==0){
					printf("%d",cc);
				}else{
					printf("%d%d",b,cc);
				}
			}else{
				printf("%d%d%d",a,b,cc);
			}
		}else{
			printf("%d%d%d",a,b,cc);
		}
		
	}
	

	
	
	return 0;
}
