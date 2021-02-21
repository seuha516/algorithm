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

	int n; scanf("%d",&n);
	int num=100005;
	int arr[100005];
	int gaesoo[100005]={0,};
	for(int i=0;i<n;i++){
		scanf("%d",arr+i); gaesoo[arr[i]]++;
	}
	int ma=-1;

	for(int i=0;i<num;i++){
		if(i==gaesoo[i]){
			ma=max(ma,i);
		}	
	}
	printf("%d",ma);
	
	return 0;
}
 


