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
	
	int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d",min(a+d,b+c));
		
	return 0;
}
