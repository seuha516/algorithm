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
	
	int n,l,k;scanf("%d %d %d",&n,&l,&k);
	
	int arr[200];
	for(int i=0;i<200;i++){
		arr[i]=2000;
	}
	
	for(int i=0;i<n;i++){
		int a,b;scanf("%d %d",&a,&b);
		if(l>=b){
			arr[i]=140;
		}else if(l>=a){
			arr[i]=100;
		}else{
			arr[i]=0;
		}
	}
	sort(arr,arr+n);
	
	int dap=0;
	for(int i=1;i<=k;i++){
		dap+=arr[n-i];
	}
	printf("%d",dap);	
	
	return 0;
}

