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

int main(){
	
	int a,b,n; scanf("%d %d %d",&a,&b,&n);
	int d=1000000; int t1,t2;
	while(n--){
		int x,y; scanf("%d %d",&x,&y);
		int tt=abs(x-a)+abs(y-b);
		if(d>tt){
			t1=x;t2=y;d=tt;
		}
	}
	printf("%d %d",t1,t2);
	
return 0;}





