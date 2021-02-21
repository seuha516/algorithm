#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int gcd(int a,int b){
	int w;
	while(b!=0){
		w=a%b;
		a=b;
		b=w;
	}
	return a;
}


int main()
{
    int x,y;scanf("%d %d",&x,&y);
    
    x=y-x;
    int t=gcd(y,x);
   	printf("%d %d",x/t,y/t);
   	
    return 0; 
}

