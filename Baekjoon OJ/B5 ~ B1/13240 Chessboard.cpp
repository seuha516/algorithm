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
	
	int a,b;scanf("%d %d",&a,&b);
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if((i+j)%2==0)printf("*");
			else printf(".");
		}printf("\n");
	}
	
	return 0;
}




