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
#include <stack>

using namespace std;

#define sosubumui 32000 //구할 소수 리스트의 범위 
int number[sosubumui];
int sosulist[sosubumui];
int sosugaesoo;
void sosusetting(){
	number[0]=-1; number[1]=-1; //0과 1은 소수가 아니다 
	int sq_sosubumui=sqrt(sosubumui)+1;
	for(int i=2;i<=sq_sosubumui;i++){
    	int t=i+i;
    	while(t<=sosubumui){
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
int isitsosu(long long a){
   if(a==1){ // 1은 소수가 아니다 
      return 0; 
   }
   int divided=0;
   for(int i=0;sosulist[i]<=a&&i<sosugaesoo;i++){
      if(a%sosulist[i]==0){
         a/=sosulist[i];
         divided=1; 
		 break;
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

long long johap[55][55];
void johapsetting(){
	for(int i=0;i<55;i++){
		johap[i][0]=1;
		johap[i][i]=1;
	}
	for(int i=2;i<55;i++){
		for(int j=1;j<=i-1;j++){
			johap[i][j]=johap[i-1][j-1]+johap[i-1][j];
		}
	}
}
void johapprint(){
	for(int i=0;i<55;i++){
		printf("<< %d >>\n",i);
		for(int j=0;j<=i;j++){
			printf("[%lld]",johap[i][j]);
		}
		printf("\n");
	}
}

long long fermat(long long a,long long n,long long k){ //a^n을 k로 나눈 나머지 (k는 충분히 큰 소수) 
	bool ok[32]={0,};
	for(int i=0;i<32;i++){
		ok[i]=n%2; n/=2;
	}
	long long result=1; long long temp=a; 
	for(int i=0;i<32;i++){
		//printf("%lld의 2^%d승은 %lld\n",a,i,temp);
		if(ok[i]){
			result*=temp;
			result%=k;
			//printf("ok[%d]=TRUE, result: %lld\n",i,result);
		}
		temp*=temp;
		temp%=k;
	}
	return result;
}


vector <long long> soinsoo;
long long dap;

void gop(int lev, int gaesoo, long long gap,long long bb){
	//printf("lev %d, gaesoo %d, gap %lld\n",lev,gaesoo,gap);
	
	if(lev==soinsoo.size()){
		//printf(">>%d개를 곱한 값 %lld, ",gaesoo,gap);
		if(gaesoo%2==1){
			dap-=bb/gap;
		//	printf("-%lld\n",nn/gap);
		}else if(gaesoo%2==0&&gaesoo!=0){
			dap+=bb/gap;
		//	printf("+%lld\n",nn/gap);
		}else{
		//	printf("\n");
		}
		return;
	}
	gop(lev+1,gaesoo,gap,bb);
	gop(lev+1,gaesoo+1,gap*soinsoo[lev],bb);
}

int main(){
	
	sosusetting();
	
	int t;scanf("%d",&t); int ccc=0;
	while(t--){
		ccc++;
		while(!soinsoo.empty())soinsoo.pop_back();
		long long a,b,n; scanf("%lld %lld %lld",&a,&b,&n); 
		
		for(int i=0;i<sosugaesoo;i++){
			long long sosu=(long long)sosulist[i];
			if(sosu>n) break;
			if(n%sosu==0){
				soinsoo.push_back(sosu);
				while(n%sosu==0){
					n/=sosu;
				}
			}
		}
		if(n!=1) soinsoo.push_back(n);
		
		dap=b; gop(0,0,1,b); long long t1=dap;
		dap=a-1; gop(0,0,1,a-1); long long t2=dap;
		
		printf("Case #%d: %lld\n",ccc,t1-t2);
		
	}
	
	return 0;
	
}


