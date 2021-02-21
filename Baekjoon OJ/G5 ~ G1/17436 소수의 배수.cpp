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

#define sosubumui 1000000 //구할 소수 리스트의 범위 
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
      //printf("%d로 나눠볼까\n",sosulist[i]);
      if(a%sosulist[i]==0){
         //printf("나눠짐\n");
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
long long nn; 
long long dap;

void gop(int lev, int gaesoo, long long gap){
	//printf("lev %d, gaesoo %d, gap %lld\n",lev,gaesoo,gap);
	
	if(lev==soinsoo.size()){
		//printf(">>%d개를 곱한 값 %lld, ",gaesoo,gap);
		if(gaesoo%2==1){
			dap-=nn/gap;
		//	printf("-%lld\n",nn/gap);
		}else if(gaesoo%2==0&&gaesoo!=0){
			dap+=nn/gap;
		}
		return;
	}
	
	gop(lev+1,gaesoo,gap);
	gop(lev+1,gaesoo+1,gap*soinsoo[lev]);
	
}

int main(){
	
	sosusetting();
	
	long long n,m; scanf("%lld %lld",&n,&m); nn=m;
	while(n--){
		long long x; scanf("%lld",&x); soinsoo.push_back(x);
	}
	
	gop(0,0,1);
	
	printf("%lld",dap*(-1));
	
	return 0;
}


