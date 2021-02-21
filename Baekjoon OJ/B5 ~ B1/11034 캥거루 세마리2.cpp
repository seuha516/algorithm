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
#include <functional>

using namespace std;

int main(){
	
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		
		int x=b-a-1; int y=c-b-1;
		printf("%d\n",max(x,y));
		
	}
	
	return 0;
}


