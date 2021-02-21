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
	
	int a,b;scanf("%d %d",&a,&b); int h=0;
	while(a--){
		int x,y;scanf("%d:%d",&x,&y);
		h+=x*60+y;
		if(a!=0)h-=b;
	}
	printf("%02d:%02d:%02d",h/3600,h%3600/60,h%60);
	
	
return 0;}



