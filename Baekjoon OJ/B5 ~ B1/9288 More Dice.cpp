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
	
	int t;scanf("%d",&t); int c=0;
	for(int i=1;i<t+1;i++){
		
		printf("Case %d:\n",i);
		
		int x;scanf("%d",&x);
		
		bool ok[7]={0,};
		
		for(int i=1;i<=6;i++){
			int a=i; int b=x-i;
			if(b>0&&b<7){
				if(ok[b]||ok[a])continue;
				ok[b]=1;
				printf("(%d,%d)\n",a,b);
			}
		}
	}
	
return 0;}





