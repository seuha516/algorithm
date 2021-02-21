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
		t++;
		int a[3]; scanf("%d %d %d",a,a+1,a+2);
		sort(a,a+3);
		
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			printf("Scenario #%d:\nyes\n\n",t);
		}else{
			printf("Scenario #%d:\nno\n\n",t);
		}
		
	}
	return 0;
}



