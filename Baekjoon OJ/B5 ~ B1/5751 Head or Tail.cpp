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
	
	while(1){
		int x;scanf("%d",&x);
		if(!x)break;
		
		int a=0,b=0;
		for(int i=0;i<x;i++){
			int xx;scanf("%d",&xx);
			if(xx)b++;
			else a++;
		}
		
		printf("Mary won %d times and John won %d times\n",a,b);
		
	}
	
return 0;}





