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
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	
	if(a+b-2*c>=0){
		printf("%d",a+b-2*c);
	}else{
		printf("%d",a+b);
	}
	
	return 0;
}
