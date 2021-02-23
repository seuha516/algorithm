#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int min(int a,int b){
	if(a<b) return a;
	else return b;
}



long long int namu[1000005]={0,};

long long int cutnamu(long long int st,long long int end,long long int goal,long long int soo){
	long long int mid=(st+end)/2;

	long long int result;
	
	result=0;
	for(int i=0;i<soo;i++){
		if(namu[i]>mid){
			result+=namu[i]-mid;
		}
	}
	
	if(goal>result){
		return cutnamu(st,mid-1,goal,soo);
	}else{
		result=0;
		for(int i=0;i<soo;i++){
			if(namu[i]>mid+1){
				result+=namu[i]-mid-1;
			}
		}
		if(result<goal){ 
			return mid;
		}
		return cutnamu(mid+1,end,goal,soo);
	}
}

int main() {
	
	long long int a,b;scanf("%lld %lld",&a,&b);
	

	for(long long int i=0;i<a;i++){
		scanf("%lld",namu+i);
	}
	
	long long int tt=cutnamu(0,1000000000,b,a);
	
	printf("%lld",tt);
	
}
