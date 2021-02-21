#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <math.h>

using namespace std;

int gcd(int a, int b){
	int t;
	if (a<b){
		t=a;
		a=b;
		b=t;
	}
	if(a%b==0){
		return b;
	}else{
		a-=b;
		return gcd(a,b);
	}
	
	
}

int main() {
	int a, b, c;
	int n;
	int su;
	scanf("%d",&n);
	if(n==2){
		scanf("%d %d",&a,&b);
		su=gcd(a,b);
	}else{
		scanf("%d %d %d",&a,&b,&c);
		su=gcd(a,b);
		su=gcd(su,c);
	}
	int temp=0;
	for(int i=1;i<=su;i++){
		if(su%i==0){
			printf("%d\n",i);
		}
	}
	
	
	return 0;
}
