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
	if(n%3==0){
		printf("Jolteon");
	}else if(n%3==1){
		printf("Flareon");
	}else{
		printf("Vaporeon");
	}
	
	
	return 0;	
}

