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
	
	int a,b,c,d,n;scanf("%d %d %d %d",&a,&b,&c,&d);

	int t1,t2;
	if(b%c==0){
		t1=b/c;
	}else{
		t1=b/c+1;
	}
	if(d%a==0){
		t2=d/a;
	}else{
		t2=d/a+1;
	}
	
	if(t1>t2){
		printf("PLAYER A");
	}else if(t1<t2){
		printf("PLAYER B");
	}else{
		printf("DRAW");
	}
   
	return 0;
}


