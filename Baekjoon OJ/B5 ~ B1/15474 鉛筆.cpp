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

int min(int a,int b){
   if(a>b){
      return b;
   }else return a;
}

int main(){
	
	int a,b,c,d,e; scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a%b==0){
		b=a/b;
	}else{
		b=a/b +1;
	}
	if(a%d==0){
		d=a/d;
	}else{
		d=a/d +1;
	}
	b*=c;
	d*=e;
	
	printf("%d",min(b,d));
	
	return 0;
}

