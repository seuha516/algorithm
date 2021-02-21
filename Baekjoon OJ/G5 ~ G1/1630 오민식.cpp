#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

	int x; scanf("%d",&x);

	if(x>=379721){
		printf("0");return 0;
	}

	int soo[x+2]={0,}; soo[1]=-1; soo[0]=-1;
	int sosu[100002]={0,};

	for(int i=2;i<1002;i++){
		int t=i+i;
		for(int j=t;j<x+2;j+=i){
			soo[j]=-1;
		}
	}

	int t=0;
	for(int i=0;i<x+2;i++){
		if(soo[i]==0){
			sosu[t++]=i;
		}
	}

	int arr[x+2];
	for(int i=0;i<x+2;i++){
		arr[i]=1;
	}

	long long int dee;

	for(int i=0;sosu[i]!=0;i++){

		dee=sosu[i];
		while(1){
			if(dee>x+2){
				break;
			}
			arr[dee]=sosu[i];
			dee*=sosu[i];
		}

	}
	
	unsigned long long int dap=1;
	for(int i=1;i<=x;i++){
		if(arr[i]==1){
			continue;
		}
		unsigned long long int tt=arr[i];
		dap=((dap%987654321)*tt)%987654321;

	}
	printf("%llu",dap);
	
	return 0;
}

