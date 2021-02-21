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
	
	int n,w,h;scanf("%d %d %d",&n,&w,&h);
	
	while(n--){
		int a;scanf("%d",&a);
		if(a*a<=w*w+h*h){
			printf("DA\n");
		}else{
			printf("NE\n");
		}
	}
	return 0;
}



