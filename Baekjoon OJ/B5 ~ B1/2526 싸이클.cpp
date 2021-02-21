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
	
	int arr[1500]={0,};
	bool visit[1500]={false,};
	
	int n,p; scanf("%d %d",&n,&p);
	int nn=n; int dap=0; int cc=0;
	for(int i=1;1;i++){
		
		if(visit[n]){
			cc=n; dap=i; break;
		}
		
		arr[n]=i; visit[n]=1;
		n=(n*nn)%p;
	}
	
	printf("%d",dap-arr[cc]);
	
	return 0;
}


