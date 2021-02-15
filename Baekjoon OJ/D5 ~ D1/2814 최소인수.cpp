#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>
#define sosubumui 1000000 //구할 소수 리스트의 범위

using namespace std;
 
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
long long fermat(long long a,long long n,long long k){ //a^n을 k로 나눈 나머지 (k는 충분히 큰 소수) 
	bool ok[32]={0,};
	for(int i=0;i<32;i++){
		ok[i]=n%2; n/=2;
	}
	long long result=1; long long temp=a; 
	for(int i=0;i<32;i++){
		if(ok[i]){
			result*=temp;
			result%=k;
		}
		temp*=temp;
		temp%=k;
	}
	return result;
}


int n,p,idx;
vector <long long> smallsosu;
int smallsize;
long long temp;

void check(long long x,int gaesoo,int past,long long now){ //x는 가장 작은 소인수가 p인 수 중 몇 번째 수인가? 
	if(gaesoo%2==0){
		temp+=(x/now);
	}else{
		temp-=(x/now);
	}	
	for(int i=past;i<smallsize;i++){
		if(now*smallsosu[i]>x){
			break;
		}else{
			check(x,gaesoo+1,i+1,now*smallsosu[i]);
		}
	}
	return;
}
int find(int st,int end,int goal){
	int mid=(st+end)/2;
	temp=0; check(mid,0,0,1);
	int res=(int)temp;

	if(st>end) return 0;
	if(res==goal){
		temp=0; check(mid-1,0,0,1);
		int ress=(int)temp;
		if(ress!=goal){
			return mid;
		}else{
			return find(st,mid-1,goal);
		}
	}else if(res>=goal){
		return find(st,mid-1,goal);
	}else{
		return find(mid+1,end,goal);
	}
}

int main(){
	
	sosusetting();
	scanf("%d %d",&n,&p);
	
	if(p>31999){
		if(n==1) printf("%d",p);
		else printf("0");			
	}else if(p>1000){
		if(n==1){
			printf("%d",p); return 0;
		}else{
			n--;
		}
		int maximum=1000000000/p; int dap=0;
		for(int i=168;sosulist[i]<=maximum;i++){
			if(sosulist[i]>=p){
				n--;
			}
			if(n==0){
				dap=sosulist[i]*p; break;
			}
		}
		printf("%d",dap);
	}else{
		for(int i=0;i<sosugaesoo;i++){
			if(sosulist[i]<p) smallsosu.push_back((long long)sosulist[i]);
		}	
		smallsize=smallsosu.size();
		
		int x=find(0,1000000000,n);
		
		if((long long)x*(long long)p>1000000000){
			printf("0");
		}else{
			printf("%d",x*p);
		}
	}
	
	return 0;
	
}

