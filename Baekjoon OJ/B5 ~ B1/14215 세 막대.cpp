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
	
	int a[3]; scanf("%d %d %d",a,a+1,a+2);
	sort(a,a+3);
	
	if(a[2]>=a[1]+a[0]){
		a[2]=a[1]+a[0]-1;
	}
	printf("%d",a[2]+a[1]+a[0]);
	
	return 0;
}
