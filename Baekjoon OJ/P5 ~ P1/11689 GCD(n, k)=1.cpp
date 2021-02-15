#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define sosubumui 1000000 //구할 소수 리스트의 범위 
int number[sosubumui];
int sosulist[sosubumui];
int sosugaesoo;
void sosusetting(){
	number[0]=-1; number[1]=-1; 
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

vector <long long> soinsoo;
long long nn; 
long long dap;

void gop(int lev, int gaesoo, long long gap){
	if(lev==soinsoo.size()){
		if(gaesoo%2==1){
			dap-=nn/gap;
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
	
	long long n; scanf("%lld",&n);
	dap=nn=n;
	
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
	
	gop(0,0,1);
	
	printf("%lld",dap);
	
	return 0;
}


