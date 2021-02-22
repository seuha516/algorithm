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
	
	bool ok[10005]={0,};int dap=0;
	int t;scanf("%d",&t);
	
	while(t--){
		int a,b;scanf("%d %d",&a,&b);
		if(a>b)swap(a,b);
		if(a==b)continue;
		for(int i=a;i<b;i++)ok[i]=1;
	}
	for(int i=0;i<10005;i++){
		if(ok[i])dap++;
	}
	
	printf("%d",dap);
		
	return 0;
}


