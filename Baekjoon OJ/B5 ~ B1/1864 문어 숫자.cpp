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
		char c[10]={0,}; scanf("%s",c); if(c[0]==35) break;
		
		long long t=0;
		
		for(int i=0;c[i]!=0;i++){
			char x=c[i];
			long long y;
			if(x=='-') y=0;
			if(x==92) y=1;
			if(x==40) y=2;
			if(x=='@') y=3;
			if(x=='?') y=4;
			if(x=='>') y=5;
			if(x=='&') y=6;
			if(x=='%') y=7;
			if(x=='/') y=-1;
			
			
			
			t*=8;
			t+=y;
			
		}
		
		printf("%lld\n",t);
	}

	return 0;
}


