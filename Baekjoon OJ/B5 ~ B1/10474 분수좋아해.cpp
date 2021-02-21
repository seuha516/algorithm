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

	while(1){
		
		int a,b;scanf("%d %d",&a,&b); 
		if(a==0&&b==0) break;
		
		printf("%d %d / %d\n",a/b,a%b,b);
		
	}
	return 0;
}


