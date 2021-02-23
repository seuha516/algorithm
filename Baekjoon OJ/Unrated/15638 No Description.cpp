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

#define sosubumui 100002 //구할 소수 리스트의 범위 
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
int isitsosu(int a){
   if(a==1){
      return 0;
   }
   
   int divided=0;
   for(int i=0;sosulist[i]<=a&&i<sosugaesoo;i++){
      //printf("%d로 나눠볼까\n",sosulist[i]);
      if(a%sosulist[i]==0){
         //printf("나눠짐\n");
         a/=sosulist[i];
         divided=1; break;
      }
   }
   if(divided&&a==1){
      return 1;
   }else if(!divided){
      return 1;
   }else{
      return 0;
   }
}

int main(){
	sosusetting();
	int n;scanf("%d",&n);
	if(isitsosu(n)){
		printf("Yes");
	}else{
		printf("No");
	}
	
    return 0;
}


