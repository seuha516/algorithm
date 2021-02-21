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

using namespace std;
	
int main(){	
	
	int a,b;scanf("%d %d",&a,&b);
	
	int c=a*a-b;
	c=sqrt(c);
	a=a*(-1);
	
	int aa=a+c;
	int bb=a-c;
	
	if(aa==bb){
		printf("%d",aa);
	}else{
		if(aa<bb){
			printf("%d %d",aa,bb);
		}else{
			printf("%d %d",bb,aa);
		}
	}
	
	return 0;
}



