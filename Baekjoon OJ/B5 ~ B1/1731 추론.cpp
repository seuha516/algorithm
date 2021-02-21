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

using namespace std;

int main(){	

	int n; scanf("%d",&n);
	
	int arr[55]={0,};
	
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	
	if(arr[2]-arr[1]==arr[1]-arr[0]){
		printf("%d",arr[n-1]+arr[2]-arr[1]);
	}else{
		printf("%d",arr[n-1]*(arr[2]/arr[1]));
	}
	
	return 0;
}
 
