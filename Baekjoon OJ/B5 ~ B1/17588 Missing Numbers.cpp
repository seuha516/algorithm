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
#include <stack>

using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	int t;scanf("%d",&t);
	int ok=0;
	int past=0;	
	while(t--){
		int x;scanf("%d",&x);
		if(x-past>1){
			for(int i=past+1;i<x;i++){
				printf("%d\n",i);ok=1;
			}
		}
		past=x;
	}
	
	if(ok==0){
		printf("good job");
	}
	
	
return 0;}





