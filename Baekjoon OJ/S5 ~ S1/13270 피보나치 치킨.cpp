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
	
	int n;scanf("%d",&n);
	
	if(n%2==0){
		printf("%d ",n/2);
	}else{
		printf("%d ",n/2 + 1);
	}
	
	if(n%3==0){
		printf("%d",n*2/3);
	}else{
		printf("%d",n*2/3);
	}
	
	return 0;
}


