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
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	
	for(int i=1;1;i++){
		if((i/7)*b+a*i>=c){
			printf("%d",i);return 0;
		}
	}
	
	return 0;
}




