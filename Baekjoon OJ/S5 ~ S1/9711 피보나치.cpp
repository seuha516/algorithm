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

int main(){
	
	int t;scanf("%d",&t); int ccc=1;
	while(t--){
		
		long long n; long long q;
		bool ok[100]={0,};
			
		scanf("%lld %lld",&n,&q);  long long nn=n;
		
		int cnt=0; 
		
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
			
			
			a%=q;b%=q;c%=q;d%=q;
			t1%=q;t2%=q;t3%=q;t4%=q;
			
		}
		
		long long dap=(a+b);
		
		if(nn==1){
			dap=1;
		}else if(nn==2){
			dap=1;
		}else if(nn==3){
			dap=2;
		}
		
		printf("Case #%d: %d\n",ccc,dap%q);
		
		ccc++;
	
	}
	
	return 0;
}



