#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

#define sosubumui 32000 //구할 소수 리스트의 범위 
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

int yakgaesoo(int a){ //약수 개수 찾기 
	int result=1;
	for(int i=0;i<sosugaesoo;i++){
		int d=0;
		while(a%sosulist[i]==0){
			a/=sosulist[i];
			d++;
		}
		result*=(d+1);
	}
	if(a!=1){
		result*=2;
	}
	return result;
}

long long hx(int a){
	int jisoo=yakgaesoo(a);
	long long result=1;
	while(jisoo--){
		result*=a;
	}
	return result;
}

int main(){   
   
	sosusetting();
	long long n; scanf("%lld",&n);
	int dap=-1;
	int log2=0; long long copyn=n;
	while(copyn){
		copyn/=2; log2++;
	}
	
	for(int i=2;i<=log2;i++){
		double boonsoo=1/(float)i;
		int inp=pow(n,boonsoo);
		if(inp<=1) continue;
		for(int j=inp-1;j<=inp+1;j++){
			if(hx(j)==n){
				if(dap==-1){
					dap=j;
				}else{
					dap=min(dap,j);
				}
			}
		}
	}
	printf("%d",dap);
	   
	return 0;
}

