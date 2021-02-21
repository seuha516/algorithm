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
	
	int a,b;scanf("%d %d",&a,&b);
	
	int t=0;
	if(b%(b-a)==0){
		t-=1;
	}
	t++;
	printf("%d",b/(b-a)+t);
		
	return 0;
}




