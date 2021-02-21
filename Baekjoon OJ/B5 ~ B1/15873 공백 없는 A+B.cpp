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
	
	int n;scanf("%d",&n);
	
	if(n==1010){
		printf("20");
	}else if(n>100){
		if(n==110){
			printf("11");
		}else if(n/100==1){
			printf("%d",10+n%10);
		}else{
			printf("%d",n/100+10);
		}
	}else{
		printf("%d",n/10+n%10);
	}
	
	
	return 0;
}


