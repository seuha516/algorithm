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

	int a,b; scanf("%d %d",&a,&b);
	int t=1;
	for(int i=a;i<=b;i++){
		int k=i*(i+1)/2;
		t=(t%14579)*(k%14579);
		t%=14579;
	}

	printf("%d",t);

	return 0;
}


