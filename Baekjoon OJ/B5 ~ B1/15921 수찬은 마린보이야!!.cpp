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
	
	int n;
	scanf("%d",&n);
	
	if(n==0){
		printf("divide by zero"); return 0;
	}
	int q=0;
	while(n--){
		int t; scanf("%d",&t);
		if(t){
			q++;
		}
	}
	if(q==0){
		printf("divide by zero"); return 0;
	}
	printf("1.00");	
	
	return 0;
}

