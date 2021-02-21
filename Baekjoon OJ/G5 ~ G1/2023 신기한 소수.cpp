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

using namespace std;

int number[10001];
int sosulist[1500]; //0~10000 사이의 소수들

int jari(int a){
	int n=0;
	while(a){
		a/=10;n++;
	}
	return n;
} 

int isitsosu(int a){
	if(a<=1){
		return 0;
	}
	
	for(int i=0;1;i++){
		if(sosulist[i]>sqrt(a)){
			break;
		}		
		if(a%sosulist[i]==0){
			return 0;
		}
	}
	return 1;
}

int pr(int len,int d){
	
	if(jari(d)==len){
		printf("%d\n",d);
		return 0;
	}
	
	for(int i=1;i<=9;i++){
		if(isitsosu(10*d+i)){
			pr(len,10*d+i);
		}
	}
		
	return 0;
}

int main(){	
	
	number[1]=-1; number[0]=-1;
	
	for(int i=2;i<=101;i++){
		int t=i+i;
		while(t<10001){
			number[t]=-1;		
			t+=i;
		}
	}
	int sosugaesoo=0;
	for(int i=0;i<10001;i++){
		if(number[i]==0){
			sosulist[sosugaesoo++]=i;
		}
	}
	
	int length; scanf("%d",&length);
	pr(length,0);
	
	return 0;
}



