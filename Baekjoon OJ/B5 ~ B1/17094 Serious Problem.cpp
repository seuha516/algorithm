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

	char c[100002]={0,};scanf("%s",c); int t1=0,t2=0;
	for(int i=0;c[i]!=0;i++){
		if(c[i]=='2')t1++;
	}t2=n-t1;

	if(t1>t2) printf("2");
	else if(t2>t1) printf("e");
	else printf("yee");
	
	
	return 0;
}

