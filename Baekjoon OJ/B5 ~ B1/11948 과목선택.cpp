#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int a[6];
	for(int i=0;i<6;i++){
		scanf("%d",a+i);
	}
	printf("%d",a[0]+a[1]+a[2]+a[3]+a[4]+a[5]-min(a[0],min(a[1],min(a[2],a[3])))-min(a[4],a[5]));
	
}
