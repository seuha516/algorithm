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
	
	int a,b,c,d,e,f;scanf("%d:%d:%d\n%d:%d:%d",&a,&b,&c,&d,&e,&f);
	if(a*10000+b*100+c>=d*10000+e*100+f) d+=24;
	int t=(d-a)*3600+(e-b)*60+(f-c);
	printf("%02d:%02d:%02d",t/3600,(t%3600)/60,t%60);
	

	return 0;
}


