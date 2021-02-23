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

int arr[1026][1026];
int hap[1026][1026]; 

int main(){
	
	int n,m;scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		int temp=0;
		for(int j=1;j<=n;j++){
			scanf("%d",&arr[i][j]);
			temp+=arr[i][j];
			hap[i][j]=temp+hap[i-1][j];
		}
	}
		
	for(int i=0;i<m;i++){
		int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
		int dap=0;
		dap=hap[c][d]+hap[a-1][b-1]-hap[a-1][d]-hap[c][b-1];
		printf("%d\n",dap);
	}
		
	return 0;
}



