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

int main(){	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	for(int i=0;i<c;i++){
		a=a^b;	
	}
	printf("%d",a);
	return 0;
}

