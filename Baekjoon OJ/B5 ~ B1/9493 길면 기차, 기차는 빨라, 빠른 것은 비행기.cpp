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
	
	while(1){
		int a,b,c; scanf("%d %d %d",&a,&b,&c); if(a==0&&b==0&&c==0) break;
		
		long double dap=abs((a/(long double)b)-(a/(long double)c))*3600;
		
		int res=floor(dap+0.5);
		
		printf("%d:%02d:%02d\n",res/3600,(res%3600)/60,res%60);
		
	}
	
	return 0;
}



