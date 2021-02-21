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
int max(int a,int b){
   if(a<b){
      return b;
   }else return a;
}

int main(){
	
	int x1,y1,x2,y2; scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int x3,y3,x4,y4; scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
	
	int t1=max(abs(x1-x3),max(abs(x1-x4),max(abs(x2-x3),max(abs(x2-x4),max(abs(x2-x1),abs(x4-x3))))));
	int t2=max(abs(y1-y3),max(abs(y1-y4),max(abs(y2-y3),max(abs(y2-y4),max(abs(y2-y1),abs(y4-y3))))));
	
	printf("%d",max(t1,t2)*max(t1,t2));
	
	
	return 0;
}

