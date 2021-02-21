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
	
	int t;t=10; int arr[1005]={0,}; int d=0; int m=-1; int dap;
	while(t--){
		int a;scanf("%d",&a); d+=a;
		arr[a]++;
		if(arr[a]>m){
			m=arr[a];
			dap=a;
		}
	}
	printf("%d\n%d",d/10,dap);

	return 0;
}


