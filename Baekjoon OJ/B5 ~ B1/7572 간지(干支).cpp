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
	
	int n;scanf("%d",&n);
	
	int t1=n%10; int t2=n%12;
	t1+=6;
	if(t1>=10)t1-=10;
	t2-=4;
	if(t2<0)t2+=12;
	
	
	printf("%c%d",t2+'A',t1);
	
	
	return 0;
}


