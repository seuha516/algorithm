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
	
	int t;scanf("%d",&t);
	while(t--){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a+c<b){
			printf("advertise\n");
		}else if(a+c==b){
			printf("does not matter\n");
		}else{
			printf("do not advertise\n");
		}
	}

	return 0;
}


