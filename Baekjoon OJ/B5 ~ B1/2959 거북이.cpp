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
	
	int a[4]; for(int i=0;i<4;i++){
		scanf("%d",a+i);
	}	
	sort(a,a+4);printf("%d",a[0]*a[2]);
			
	return 0;
}


