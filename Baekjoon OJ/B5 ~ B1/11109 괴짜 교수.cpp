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

using namespace std;

int main() {
	
	int t; scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
		
		int t=a+b*d; int tt=b*c;
		if(t>tt){
			printf("do not parallelize\n");
		}else if(t<tt){
			printf("parallelize\n");
		}else{
			printf("does not matter\n");
		}
	}
	
	return 0;
}
