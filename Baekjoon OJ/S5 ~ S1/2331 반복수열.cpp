#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define TEST 1

using namespace std;

long long pow(long long x,long long p){
	long long ret=1;
	for(int i=0;i<p;i++)ret*=x;
	return ret;
}
long long go(long long a,long long p){
	long long ret=0;
	ret+=pow(a%1000000000/100000000,p)+pow(a%100000000/10000000,p)+pow(a%10000000/1000000,p)+pow(a%1000000/100000,p)+pow(a%100000/10000,p)+
	pow(a%10000/1000,p)+pow(a%1000/100,p)+pow(a%100/10,p)+pow(a%10,p);
	return ret;
}

int main(){
	
	long long a,p; scanf("%lld %lld",&a,&p);
	vector<long long> v;
	
	v.push_back(a); long long dap;// printf("newa: %lld\n",a);
	while(1){
		long long newa=go(a,p); //printf("newa: %lld\n",newa);
		for(int i=0;i<v.size();i++){
			if(newa==v[i]){
				dap=i; goto R;
			}
		}
		v.push_back(newa); a=newa;
	}
	R:
		printf("%lld",dap);
	
	
    return 0;
}
