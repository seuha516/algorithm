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
	
	int t;
	scanf("%d",&t);
	int arr[1005]={0,};
	
	int ok=0; int dap=0;
	
	for(int i=1;i<=t;i++){
		scanf("%d",arr+i);
		int x=arr[i];
		if(x==ok){
			dap++;
			ok++; if(ok==3)ok=0;
		}
	}
	printf("%d",dap);
	
	return 0;
}



