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

long long gcd(long long a,long long b){
	if(a<b)swap(a,b);
	while(b){
		long long w=a%b;
		a=b;
		b=w;
	}
	return a;
}

long long n;
bool ok[100];


int main(){
	
	long long a1,a2; scanf("%lld %lld",&a1,&a2); n=gcd(a1,a2);
	int cnt=0; 
	
	if(n==1){
		printf("1"); return 0;
	}else if(n==2){
		printf("1"); return 0;
	}else if(n==3){
		printf("2"); return 0;
	}
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
		
		a%=1000000007;b%=1000000007;c%=1000000007;d%=1000000007;
		t1%=1000000007;t2%=1000000007;t3%=1000000007;t4%=1000000007;
	}
	
	printf("%d",(a+b)%1000000007);
	
	return 0;
}


