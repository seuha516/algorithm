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

int main() {
	
	int x,y,a0,a1,n; scanf("%d %d %d %d %d",&x,&y,&a0,&a1,&n);
	
	int dap[4]={1,0,0,1}; 
	int arr[4]={x,y,1,0};
	
	if(n==0){
		printf("%d",a0); return 0;
	}else if(n==1){
		printf("%d",a1); return 0;
	}
	
	int nn=n-1;
	while(nn){
		int temp[4]={0,};
		
		if(nn%2==1){
			temp[0]=dap[0]*arr[0]+dap[1]*arr[2];
			temp[1]=dap[0]*arr[1]+dap[1]*arr[3];
			temp[2]=dap[2]*arr[0]+dap[3]*arr[2];
			temp[3]=dap[2]*arr[1]+dap[3]*arr[3];
			for(int i=0;i<4;i++){
				dap[i]=temp[i]%100;
			}
		}
		
		temp[0]=arr[0]*arr[0]+arr[1]*arr[2];
		temp[1]=arr[0]*arr[1]+arr[1]*arr[3];
		temp[2]=arr[2]*arr[0]+arr[3]*arr[2];
		temp[3]=arr[2]*arr[1]+arr[3]*arr[3];
		for(int i=0;i<4;i++){
			arr[i]=temp[i]%100;
		}
		
		nn/=2;
	}
	
	int xxx=(dap[0]*a1+dap[1]*a0)%100; if(xxx<10)printf("0");
	printf("%d",xxx);

	return 0;
}


