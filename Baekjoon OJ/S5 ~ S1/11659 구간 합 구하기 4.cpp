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
#include <stack>

using namespace std;

int arr[100002];

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		int x; scanf("%d",&x);
		if(i==1){
			arr[1]=x; continue;
		}
		arr[i]=arr[i-1]+x;
	}
	
	for(int i=0;i<m;i++){
		int a,b; scanf("%d %d",&a,&b);
		printf("%d\n",arr[b]-arr[a-1]);
	}
	
	return 0;
}

