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
	
	int n,m;scanf("%d %d",&n,&m);
	int arr[1000]={0,};
	for(int i=1;i<=n;i++){
		scanf("%d",arr+i);
	}	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n-1;j++){
			if(arr[j]%i > arr[j+1]%i){
				int w=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=w;
			}
		}
	}
	for(int i=1;i<=n;i++){
			printf("%d\n",arr[i]);
	}
	return 0;
	
}


