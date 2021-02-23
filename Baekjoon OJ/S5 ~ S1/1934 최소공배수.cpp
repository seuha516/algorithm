#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
using namespace std;

int gcd(int a,int b){ //최대공약수 
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}


int main()
{
    int x;scanf("%d",&x);
    
    for(int i=0;i<x;i++){
        int a,b;scanf("%d %d",&a,&b);
        int t=gcd(a,b);
		int aa=a/t; int bb=b/t;
        printf("%d\n",aa*bb*t);
    }
    
    
    return 0; 
}

