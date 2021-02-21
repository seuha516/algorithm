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
	
	int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
	
	for(int i=0;i<a*c;i++){
		for(int j=0;j<b*d;j++){
			int x=i/c; int y=j/d;
			if((x+y)%2==0){
				printf("X");
			}else printf(".");
		}
		printf("\n");
	}
	return 0;
}

