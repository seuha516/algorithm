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

#define sosubumui 1000000 //구할 소수 리스트의 범위 
int number[sosubumui]; int sosulist[sosubumui]; int sosugaesoo=0;
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

int main(){
	
	sosusetting();
	
	long long a,b,l; scanf("%lld %lld %lld",&a,&b,&l);
	long long ab=a*b/gcd(a,b);
	
	if(l<ab){
		printf("-1"); return 0;
	}
	
	long long dap=1;
	
	for(int i=0;i<sosugaesoo&&i<l;i++){
		long long x=(long long)sosulist[i];
		
		if(ab%x!=0&&l%x!=0)continue;
		
		long long t1=0,t2=0;
		while(ab%x==0){
			ab/=x; t1++;
		}
		while(l%x==0){
			l/=x; t2++;
		}
		if(t1>t2){
			printf("-1"); return 0;
		}else if(t1<t2){
			dap*=llpow(x,t2);
		}
	}
	dap*=l;

	printf("%lld",dap);

	return 0;
}


