#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int jari(int a){
	int n=0;
	while(a){
		a/=10;n++;
	}
	return n;
}

bool button[10]={true,};

int canigo(int n){
	if(n==0){
		if(button[0]){
			return 1;
		}else{
			return -1;
		}
	}else{
		int t=jari(n);
		while(n){
			if(button[n%10]){
				n/=10;
			}else{
				return -1;
			}
		}
		return t;
	}
}

int main() {
	
	for(int i=0;i<10;i++){
		button[i]=true;
	}
	
	int goal; scanf("%d",&goal);
	
	int banbok; scanf("%d",&banbok);
	for(int i=0;i<banbok;i++){
		int t; scanf("%d",&t); button[t]=false;
	}
	
	int soo=abs(goal-100);
	int dap=soo;
	
	for(int i=0;i<soo;i++){
		int g1=goal-i;
		int g2=goal+i;
		if(canigo(g1)!=-1&&g1>=0){
			dap=min(dap,canigo(g1)+i);
		}
		if(canigo(g2)!=-1){
			dap=min(dap,canigo(g2)+i);
		}
	}
	printf("%d",dap);
	
	return 0;
}
