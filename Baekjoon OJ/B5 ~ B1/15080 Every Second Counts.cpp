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
	
	int a,b,c,d,e,f; scanf("%d : %d : %d\n%d : %d : %d",&a,&b,&c,&d,&e,&f);
	
	int t1=a*10000+b*100+c; int t2=d*10000+e*100+f;
	
	if(t1>t2){
		d+=24;
	}
	
	printf("%d",(d-a)*3600+(e-b)*60+(f-c));
	
	return 0;
}

