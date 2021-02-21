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
	
	int m,p,l,e,r,s,n;
	while(scanf("%d %d %d %d %d %d %d",&m,&p,&l,&e,&r,&s,&n)!=EOF){
		int a,b,c; a=l;b=p;c=m; 
		while(n--){
			int aa=e*c;
			int bb=a/r;
			int cc=b/s;
			a=aa; b=bb; c=cc;
		} 
		
		printf("%d\n",c);
		
	}
	
	return 0;
}


