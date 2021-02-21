#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#define TEST 1
#define SOSU_LIMIT 1000000

using namespace std;

vector<int> sosu_list;  // SOSU_LIMIT 이하의 소수들 
int sosu_gaesoo;  // 소수의 개수 
void sosu_making(){  // 소수를 만드는 함수 
	bool ok[SOSU_LIMIT+1]={0,};
	for(int i=2;i<=SOSU_LIMIT;i++){
		if(ok[i])continue;
		sosu_list.push_back(i);
		for(int j=i;j<=SOSU_LIMIT;j+=i){
			ok[j]=1;
		}
	}
	sosu_gaesoo=sosu_list.size();
}
bool isitsosu(int x){  // 소수인지 판별 
	 vector<int>::iterator iter;
	 iter=find(sosu_list.begin(),sosu_list.end(),x);
	 if(iter==sosu_list.end())return 0; 
	 else return 1;
}

long long arr[1000500];
long long S[1000500];

long long yak(int x){
	long long d=1; long long ret=1;
	
	int t=0;
	while(1){
		int sosu=sosu_list[t++]; 
		if(sosu*sosu>x) break;
		while(x%sosu==0){
			x/=sosu;
			d*=sosu; d++;
		}
		ret*=d; d=1;
	}
	if(x!=1){
		ret*=(1+x);
	}
	
	return ret;	
}
int cc(int x){
	return x*(x-1)/2;
}
int change(int a,int b){
	if(a>b) return change(b,a);
	int ret=0;
	for(int i=1;i<=a;i++){
		ret+=(a-i)*(b-i);
	}
	return ret;
}

int main(){
	
	int n; scanf("%d",&n);
	int dap=0;
	for(int i=1;i<=sqrt(n);i++){
		int mod=n-(i * (n/i));
		int bonus=cc(mod);
		//printf("%d * %d + %d (bonus %d)\n",i,n/i,mod,bonus);
		dap=max(dap,change(i,n/i)+bonus);
	}
	printf("%d",dap);
	
    return 0;
}

