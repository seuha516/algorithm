#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>

using namespace std;

long long intpow(long long a,int n){
	long long t=1;
	for(int i=0;i<n;i++){
		t*=a;
	}
	return t;
}
#define sosubumui 3200 //구할 소수 리스트의 범위 
int number[sosubumui];
int sosulist[sosubumui];
int sosugaesoo=0;
void sosusetting(){
   number[0]=-1; number[1]=-1;
   for(int i=2;i<=sqrt(sosubumui);i++){
      int t=i+i;
      while(t<sosubumui){
         number[t]=-1;      
         t+=i;
      }
   }
   for(int i=0;i<sosubumui;i++){
      if(number[i]==0){
         sosulist[sosugaesoo++]=i;
      }
    }
}
void sosuprint(){
   for(int i=0;i<sosugaesoo;i++){
      printf("%d번째 소수: %d\n",i,sosulist[i]);
   }
   printf("0~%d 사이 소수의 개수: %d\n",sosubumui,sosugaesoo);
}
int isitsosu(int a){
	if(a==1){
		return 0;
	}
	
	int divided=0;
	for(int i=0;sosulist[i]<=a&&i<sosugaesoo;i++){
		//printf("%d로 나눠볼까\n",sosulist[i]);
		if(a%sosulist[i]==0){
			//printf("나눠짐\n");
			a/=sosulist[i];
			divided=1; break;
		}
	}
	if(divided&&a==1){
		return 1;
	}else if(!divided){
		return 1;
	}else{
		return 0;
	}
}

int main(){   
	
	sosusetting();
	
	long long a,b; scanf("%lld %lld",&a,&b);
	int dap=0;
	
	int t=0; long long copyb=b;
	while(copyb){
		copyb/=2; t++;
	}
	
	for(int i=2;i<t;i++){
			
		long long aa,bb;
		aa=ceil(pow(a,1/(float)i));
		bb=floor(pow(b,1/(float)i));
		
		for(long long j=aa-1;j<=bb+1;j++){
			if(j>0&&isitsosu(j)&&intpow(j,i)<=b&&intpow(j,i)>=a){
				dap++;
			}
		}
	}
	
	printf("%d",dap);

	return 0;
}


