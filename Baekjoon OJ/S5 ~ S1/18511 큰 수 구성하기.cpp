#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int arr[10];int n,k;

int dap;

void go(int a){
	
	if(a>n){
		return;	
	}
	
	if(a>dap){
		dap=a;
	}
	
	a*=10;
	for(int i=0;i<k;i++){
		go(a+arr[i]);
	}
}

int main(){
	
	scanf("%d %d",&n,&k);for(int i=0;i<k;i++)scanf("%d",arr+i);
	go(0);
	
	printf("%d",dap);
	
	return 0;
	
}
