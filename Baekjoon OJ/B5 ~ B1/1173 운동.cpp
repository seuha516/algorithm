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
	int min;
	int a,b,c,d,e;scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);\
	if(b+d>c){
		printf("-1");return 0;
	}else{
		min=0;
		int now=b;
		while(a!=0){
			if(now+d<=c){
				now+=d;
				a--;
			}else{
				now=max(b,now-e);
			}
			min++;
		}
	}
	printf("%d",min);
	return 0;
}
 



