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
	
int main(){	
	int n;scanf("%d",&n);int t=0;
	while(n--){
		int x;scanf("%d",&x);
		int arr[1000];int d=0;
		for(int i=0;i<x;i++){
			scanf("%d",arr+i);d+=arr[i];
		}
		printf("%d\n",d);		
	}
	return 0;
}


