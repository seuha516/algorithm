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
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	int have=a+b; int dap=0;
	while(have>=c){
		dap+=have/c;
		int temp=have/c; have%=c;
		have+=temp;
	}
	printf("%d",dap);
	
	return 0;
}


