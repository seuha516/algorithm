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
	
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	int t=0;
	
	while(a!=b){
		if(a<0){
			a++; t+=c;
		}else if(a>0){
			a++; t+=e;
		}else{
			a++; t+=d+e;
		}
	}
	printf("%d",t);
	
	return 0;
}




