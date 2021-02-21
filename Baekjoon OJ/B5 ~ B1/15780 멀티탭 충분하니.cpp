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
	
	int n,k;scanf("%d %d",&n,&k); int h=0;
	for(int i=0;i<k;i++){
		int x;scanf("%d",&x);
		if(x%2==0){
			h+=x/2;
		}else{
			h+=(x/2)+1;
		}
	}
	if(h>=n){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}


