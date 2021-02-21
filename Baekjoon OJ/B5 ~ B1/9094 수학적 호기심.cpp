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
	
	int t; scanf("%d",&t);
	while(t--){
		int n,m;scanf("%d %d",&n,&m);int d=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<n;j++){
				if((i*i+j*j+m)%(i*j)==0){
					d++;
				}
			}
		}
		printf("%d\n",d);
	}
  
    return 0;
}


