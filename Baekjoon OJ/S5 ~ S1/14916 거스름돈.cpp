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
	
	int n;scanf("%d",&n);
	
	int arr[20]={0,0,1,0,2,1,3,2,4,3,2,4,3,5,4,3,5,4,6,5};
	
	int dap=0;
	
	if(n==1||n==3){
		printf("-1"); return 0;
	}else{
		while(n>=20){
			n-=10; dap+=2;
		}
		dap+=arr[n];
	}
	printf("%d",dap);
	
	
	return 0;
}


