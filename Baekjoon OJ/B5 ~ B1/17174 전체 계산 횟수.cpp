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
	
	int dap=0; int a,b;scanf("%d %d",&a,&b);
	
	while(a){
		dap+=a;
		a/=b;
	}
	printf("%d",dap);
	
	return 0;
}



