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
	
	int a,b;scanf("%d %d",&a,&b);
	if(a==0&&b==0){
		printf("Not a moose");
	}else if(a==b){
		printf("Even %d",a+b);
	}else{
		printf("Odd %d",2*max(a,b));
	}
	
	return 0;
}



