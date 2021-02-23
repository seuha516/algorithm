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

using namespace std;	

int main(){	

	int w,h; scanf("%d %d",&w,&h);
	int p,q; scanf("%d %d",&p,&q);
	int t; scanf("%d",&t);
	
	int pp,qq;
	pp=p+t; qq=q+t;
	
	int pn,qn;
	pn=pp%(2*w); qn=qq%(2*h);
	
	int d1,d2;
	if(pn<w){
		d1=pn;
	}else{
		d1=2*w-pn;
	}
	if(qn<h){
		d2=qn;
	}else{
		d2=2*h-qn;
	}
	
	printf("%d %d",d1,d2);
	
	return 0;
}



