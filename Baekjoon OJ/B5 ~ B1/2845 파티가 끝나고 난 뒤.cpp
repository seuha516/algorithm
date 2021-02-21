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
	int a,b;scanf("%d %d",&a,&b);
	int t=a*b;
	for(int i=0;i<5;i++){
		int tt;scanf("%d",&tt);
		printf("%d ",tt-t);
	}
	return 0;
}
