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
			int t1=0, t2=0;
		int x=9;
		while(x--){
			int a,b;
			scanf("%d %d",&a,&b);
			t1+=a;t2+=b;
		}
		if(t1>t2){
			printf("Yonsei");
		}else if(t1<t2){
			printf("Korea");
		}else{
			printf("Draw");
		}
		printf("\n");
		
	}
	return 0;
}

