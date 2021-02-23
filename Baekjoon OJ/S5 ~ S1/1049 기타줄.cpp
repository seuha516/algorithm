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
	
	int n,m; scanf("%d %d",&n,&m); int a=1<<30,b=1<<30;
	for(int i=0;i<m;i++){
		int x,y;scanf("%d %d",&x,&y);
		a=min(a,x); b=min(b,y);
	}
	
	if(a<b*6){
		printf("%d",min(((n/6)*a+(n%6)*b),(n/6 + 1)*a));
	}else{
		printf("%d",n*b);
	}
	
	
}



