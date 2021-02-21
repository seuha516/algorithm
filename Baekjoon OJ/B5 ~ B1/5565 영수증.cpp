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
	
	int a;scanf("%d",&a);
	
	int b;
	for(int i=0;i<9;i++){
		scanf("%d",&b);
		a-=b;
	}
	
	printf("%d",a);

	return 0;
}

