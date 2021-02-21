#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int min(int a,int b){
	if(a>b){
		return b;
	}else return a;
}
int max(int a,int b){
	if(a<b){
		return b;
	}else return a;
}


int main() {
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	
	int aa,bb;
	if(a%c==0){
		aa=a/c;		
	}else{
		aa=a/c+1;
	}
	if(b%c==0){
		bb=b/c;		
	}else{
		bb=b/c+1;
	}
	printf("%lld",(long long)bb*(long long)aa);
	

}
