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
	
	int t;scanf("%d",&t);
	while(t--){
		int a,b;scanf("%d %d",&a,&b); int t=a/b; if(a%b!=0) t++;
		printf("%d\n",t);
	}
   
	return 0;
}


