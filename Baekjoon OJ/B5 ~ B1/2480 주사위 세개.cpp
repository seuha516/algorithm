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

int main() {
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	if(a==b&&b==c){
		printf("%d",a*1000+10000);
		
	}else if(b==c){
		printf("%d",b*100+1000);
		
	}
	else if(a==b){
		printf("%d",a*100+1000);
		
	}
	else if(c==a){
		printf("%d",a*100+1000);
		
	}else{
		printf("%d",max(a,max(b,c))*100);
		
	}
	
	return 0;
}
