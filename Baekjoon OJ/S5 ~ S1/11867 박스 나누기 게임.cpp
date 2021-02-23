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
	
	int n,m;scanf("%d %d",&n,&m);
	
	if(n==2||m==2){
		printf("A");
	}else if(n%2==0||m%2==0){
		printf("A");
	}else{
		printf("B");
	}

	return 0;
}





