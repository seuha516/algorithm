#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
using namespace std;

long long int gcd(long long int a,long long int b){ //최대공약수 
	while(b!=0){
		long long int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main()
{    
    for(int i=0;i<1;i++){
        long long int a,b;scanf("%lld %lld",&a,&b);
        long long int t=gcd(a,b);
		long long int aa=a/t; int bb=b/t;
        printf("%lld",aa*bb*t);
    }
    return 0; 
}

