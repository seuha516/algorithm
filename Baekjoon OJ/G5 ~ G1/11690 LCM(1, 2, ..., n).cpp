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

#define sosubumui 100000000 //구할 소수 리스트의 범위 
bool number[sosubumui]; int sosulist[5761456]; int sosugaesoo=0;
void sosusetting(){
   number[0]=1; number[1]=1;
   for(int i=2;i<=sqrt(sosubumui);i++){
   	  if(number[i]==1)continue;
      int t=i+i;
      while(t<sosubumui){
         number[t]=1;      
         t+=i;
      }
   }
   for(int i=0;i<sosubumui;i++){
      if(number[i]==0){
         sosulist[sosugaesoo++]=i;
      }
    }
}

long long llpow(long long a,long long n){
   long long t=1;
   for(int i=0;i<n;i++){
      t*=a;
   }
   return t;
}

int gcd(int a,int b){
   int w;
   while(b){
      w=a%b;
      a=b;
      b=w;
   }
   return a;
}

int main(){
	
	sosusetting();
	
	long long n;scanf("%lld",&n);
	
	long long dap=1; long long mod=llpow(2,32);
	
	for(int i=0;i<sosugaesoo;i++){
		long long x=(long long)sosulist[i];
		if(x>n)break;
		long long nn=n; long long temp=1;
		while(1){
			nn/=x;
			if(nn==0)break;
			temp*=x;
			temp%=mod;
		}
		dap*=temp;
		dap%=mod;
	}
	printf("%lld",dap%mod);

	return 0;
}



