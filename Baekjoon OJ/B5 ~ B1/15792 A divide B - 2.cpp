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
	int a,b; scanf("%d %d",&a,&b);
	printf("%d.",a/b);
	a=a%b;
	for(int i=0;i<1500;i++){
		a*=10;printf("%d",a/b);a%=b;
	}
	return 0;
}


