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
#include <stack>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		int a,b,c,d,aa,bb,cc,dd;
		scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&aa,&bb,&cc,&dd);
		a+=aa;b+=bb;c+=cc;d+=dd;
		a=max(1,a);b=max(1,b);c=max(0,c);
		printf("%d\n",a+b+b+b+b+b+c+c+d+d);
	
return 0;}





