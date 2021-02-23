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

#define sosubumui 32000 //구할 소수 리스트의 범위 
int number[sosubumui];
int sosulist[sosubumui];
int sosugaesoo=0;
void sosusetting(){
   number[0]=-1; number[1]=-1;
   for(int i=2;i<=sqrt(sosubumui);i++){
      int t=i+i;
      while(t<sosubumui){
         number[t]=-1;      
         t+=i;
      }
   }
   for(int i=0;i<sosubumui;i++){
      if(number[i]==0){
         sosulist[sosugaesoo++]=i;
      }
    }
}

int main(){
   
   sosusetting();
   
   int n;scanf("%d",&n); int dap=-1;
   
   for(int i=0;i<sosugaesoo;i++){
   		if(n%sosulist[i]==0){
   			dap=n/sosulist[i]; break;
		}
   }
   
   if(dap==-1){
   	dap=1;
   }
	printf("%d",n-dap);
   
   return 0;
}


