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
	
	int a,b,c,d,e,f; scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	printf("%d",max(0,d-a)+max(0,e-b)+max(0,f-c));
	
	return 0;
}


