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
	
	while(1){
		int a; scanf("%d",&a);

		if(!a){break;
		}
		
		printf("%d is ",a);
		if(a%n==0){
			
		}else{
			printf("NOT ");
		}
		printf("a multiple of %d.\n",n);
	}
	return 0;
}
