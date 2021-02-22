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
	
	int a,b,c,d,e,f; scanf("%d:%d:%d\n%d:%d:%d",&a,&b,&c,&d,&e,&f);
	
	int t1=10000*a+100*b+c; int t2=10000*d+100*e+f;
	
	if(t1>t2) d+=24;
	
	int all=(d-a)*3600+(e-b)*60+(f-c);
	
	printf("%02d:%02d:%02d",all/3600,(all%3600)/60,all%60);

	return 0;
}

