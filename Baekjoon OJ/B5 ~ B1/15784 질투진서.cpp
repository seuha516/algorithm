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
	
	int n,a,b;scanf("%d %d %d",&n,&a,&b);
	int arr[1002][1022]={0,};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int ok=0;
	
	for(int i=1;i<=n;i++){
		if(i==n) continue;
		if(arr[a][i]>arr[a][b]) ok=1;
	}
	
	for(int i=1;i<=n;i++){
		if(i==n) continue;
		if(arr[i][b]>arr[a][b]) ok=1;
	}
	if(ok)printf("ANGRY");
	else printf("HAPPY");
	

	return 0;
}



