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
	int n; scanf("%d",&n);
	if(n==1){
		printf("1");return 0;
	}
	while(n){
		if(n%2&&n!=1){
			printf("0");return 0;
		}
		n/=2;
	}
	printf("1");
	
	return 0;
}
