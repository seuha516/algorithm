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
	
	int n;scanf("%d",&n);printf("%d\n",n);
	
	for(int i=0;i<n;i++){
		if(i==0){
			printf("1 ");
		}else if(i==n-1){
			printf("101 ");
		}else if(i==1){
			printf("2 ");
		}else{
			printf("%d ",i+3);
		}
	}
	
	return 0;
}

