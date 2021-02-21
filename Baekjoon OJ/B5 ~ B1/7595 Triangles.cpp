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

	while(1){
		int n;scanf("%d",&n);if(n==0){break;}
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}


