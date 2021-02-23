#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

long long int arr[10005]={0,};

long long int check(long long int lenst,long long int lenen,long long int soo,long long int mok){
	long long int len=lenst+lenen;
	len/=2;	
	long long int result=0;
	for(long long int i=0;i<soo;i++){
		result+=arr[i]/len;
	}
	if(result<mok){
		return check(lenst,len-1,soo,mok);
	}else if(result>=mok){ 
		result=0;
		for(long long int i=0;i<soo;i++){
			result+=arr[i]/(len+1);
		}
		if(result<mok){ 
			return len; 
		} 
		return check(len+1,lenen,soo,mok);
	}
}

int main() {
	long long int a,b;scanf("%lld %lld",&a,&b);
	for(long long int i=0;i<a;i++){
		scanf("%lld",arr+i);
	}
	long long int tt=check(0,4442450941,a,b);
	printf("%lld",tt);
	return 0;
}
