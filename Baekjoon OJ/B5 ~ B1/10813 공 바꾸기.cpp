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
	int arr[105]={0,};
	for(int i=0;i<105;i++)arr[i]=i;	
	while(m--){
		int a,b;scanf("%d %d",&a,&b);
		swap(arr[a],arr[b]);
	}
	for(int i=1;i<=n;i++)printf("%d ",arr[i]);
	
	return 0;
}


