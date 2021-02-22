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
#include <set>
#include <functional>

using namespace std;

int main(){
	
	int n,k; scanf("%d %d",&n,&k);
	
	int arr[2][6]={0,};
	
	for(int i=0;i<n;i++){
		int a,b; scanf("%d %d",&a,&b);
		if(a==0){
			arr[0][b-1]++;
		}else{
			arr[1][b-1]++;
		}
	}
	int dap=0;
	for(int i=0;i<6;i++){
		int x=arr[0][i]; int y=arr[1][i]; 
		//printf("x,y:%d %d\n",x,y);
		if(x%k==0){
			dap+=(x/k);
		}else{
			dap+=(x/k)+1;
		}
		if(y%k==0){
			dap+=(y/k);
		}else{
			dap+=(y/k)+1;
		}
	}
	printf("%d",dap);
	
	
	
	return 0;
}


