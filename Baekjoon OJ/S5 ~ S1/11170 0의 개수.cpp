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
		int d=0;
		int a,b;scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			int x=i;
			if(x==0){
				d++;continue;
			}
			while(x){
				if(x%10==0) d++;
				x/=10;
			}
		}
		printf("%d\n",d);
	}
	
	return 0;
}


