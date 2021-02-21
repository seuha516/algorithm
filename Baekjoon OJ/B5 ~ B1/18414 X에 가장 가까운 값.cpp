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

int main() {
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	int mi=min(c,b);
	int ma=max(c,b);
	
	if(mi<=a&&a<=ma){
		printf("%d",a);
	}else if(mi>a){
		printf("%d",mi);
	}else{
		printf("%d",ma);
	}
	
}
