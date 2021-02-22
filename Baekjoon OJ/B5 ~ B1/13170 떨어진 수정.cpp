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
	
	int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
	if(c%d==0){
		printf("%d",c/d);
	}else{
		printf("%d",c/d+1);
	}
	
	return 0;	
}

