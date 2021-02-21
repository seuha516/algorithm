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
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	int aa,bb,cc;
	aa=4*a+2*b; bb=2*b+4*c; cc=a+c+a+c;
	printf("%d",min(aa,min(bb,cc)));
	
	
	return 0;
}




