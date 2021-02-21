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
	
int xx(int a,int b, int c, int d){
	if(a==c){
		return abs(d-b);
	}else{
		return abs(c-a);
	}
}

	
int main(){	

	int n; scanf("%d",&n);
	
	int arr[30]; int brr[30];
	for(int i=0;i<n;i++){
		scanf("%d %d",arr+i,brr+i);
	}
	int dap=0;
	for(int i=0;i<=n-2;i++){
		dap+=xx(arr[i],brr[i],arr[i+1],brr[i+1]);
	}
	dap+=xx(arr[n-1],brr[n-1],arr[0],brr[0]);
	printf("%d",dap);
	
	
	return 0;
}



