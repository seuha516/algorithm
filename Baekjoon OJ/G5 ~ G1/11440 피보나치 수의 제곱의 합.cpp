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
#include <functional>

using namespace std;

long long n;
bool ok[100];

long long ttt;

int main(){
	
	scanf("%lld",&n); 
	long long nn=n;
	
	for(long long w=0;w<2;w++){
		
		n=nn+w;
		int cnt=0; 
		for(int hh=0;hh<100;hh++)ok[hh]=0;
		if(n==1){
			if(w==0){
				ttt=1;continue;
			}else{
				printf("%lld",ttt*1%1000000007); return 0;
			}
		}else if(n==2){
			if(w==0){
				ttt=1;continue;
			}else{
				printf("%lld",ttt*1%1000000007); return 0;
			}
		}else if(n==3){
			if(w==0){
				ttt=2;continue;
			}else{
				printf("%lld",ttt*2%1000000007); return 0;
			}
		}
		n-=2;
		
		while(n){
			ok[cnt]=n%2;
			n/=2;
			cnt++;
		}
		
		long long a=1,b=0,c=0,d=1;
		long long t1=1,t2=1,t3=1,t4=0;
		
		for(int i=0;i<100;i++){
			if(ok[i]){
				long long temp1,temp2,temp3,temp4;
				temp1=a*t1+b*t3;
				temp2=a*t2+b*t4;
				temp3=c*t1+d*t3;
				temp4=c*t2+d*t4;
				a=temp1; b=temp2; c=temp3; d=temp4;			
			}
			long long temp1,temp2,temp3,temp4;
			temp1=t1*t1+t2*t3;
			temp2=t1*t2+t2*t4;
			temp3=t3*t1+t4*t3;
			temp4=t3*t2+t4*t4;
			t1=temp1; t2=temp2; t3=temp3; t4=temp4;	
			
			a%=1000000007;b%=1000000007;c%=1000000007;d%=1000000007;
			t1%=1000000007;t2%=1000000007;t3%=1000000007;t4%=1000000007;
		}
		
		long long sdads=(a+b)%1000000007;
		
		if(w==0){
			ttt=sdads;
		}else{
			printf("%lld",(sdads*ttt)%1000000007);
		}
		
	}
	
	return 0;
}

