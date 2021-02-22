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
	int k;scanf("%d",&k);
	int a=1,b=0;
	for(int i=0;i<k;i++){
		int w=a;
		a=b;
		b=w+a;
	}
	printf("%d %d",a,b);
	return 0;
}


