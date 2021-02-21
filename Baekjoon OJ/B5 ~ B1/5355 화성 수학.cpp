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
	
	int t;scanf("%d",&t);
	while(t--){
		double x;char c[20]={0,}; scanf("%lf %[^\n]s",&x,c);
		if(c[0]=='@'){
			x*=3;
		}else if(c[0]=='%'){
			x+=5;
		}else if(c[0]=='#'){
			x-=7;
		}
		if(c[2]=='@'){
			x*=3;
		}else if(c[2]=='%'){
			x+=5;
		}else if(c[2]=='#'){
			x-=7;
		}
		if(c[4]=='@'){
			x*=3;
		}else if(c[4]=='%'){
			x+=5;
		}else if(c[4]=='#'){
			x-=7;
		}
		
		printf("%0.2lf\n",x);
	}
	
	return 0;
}



