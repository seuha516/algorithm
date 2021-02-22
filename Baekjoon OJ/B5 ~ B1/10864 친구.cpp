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
	
	int arr[1005]={0,};
	int n,m;scanf("%d %d",&n,&m);
	while(m--){
		int a,b;scanf("%d %d",&a,&b);arr[a]++;arr[b]++;
	}
	for(int i=1;i<=n;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}


