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
	
	int n,t; scanf("%d %d",&n,&t);
	int hap=0;
	
	for(int i=1;i<=n;i++){
		int x;scanf("%d",&x); hap+=x; 
		if(hap>t){
			printf("%d",i-1); break;
		}
	}
	if(hap<=t){
		printf("%d",n);
	}
	
   
	return 0;
}


