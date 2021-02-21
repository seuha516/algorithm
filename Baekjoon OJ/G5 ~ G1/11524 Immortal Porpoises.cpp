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

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
	
		int order;
		scanf("%d %lld",&order,&n); int cnt=0;  long long nn=n;
		
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
			
			
			a%=1000000000;b%=1000000000;c%=1000000000;d%=1000000000;
			t1%=1000000000;t2%=1000000000;t3%=1000000000;t4%=1000000000;
			
		}
		
		
		long long dap=(a+b);
		
		if(nn==0){
			dap=0;	
		}else if(nn==1){
			dap=1;
		}else if(nn==2){
			dap=1;
		}else if(nn==3){
			dap=2;
		}
		
		printf("%d %lld\n",order,dap%1000000000);
	
	}
	
	return 0;
}

