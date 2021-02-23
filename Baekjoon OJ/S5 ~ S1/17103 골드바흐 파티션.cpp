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

#define sosubumui 1000000 //구할 소수 리스트의 범위 
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
int isitsosu(int st,int end,int a){
	int mid=(st+end)/2;
	if(st>end) return 0;
	if(sosulist[mid]==a){
		return 1;
	}else if(sosulist[mid]>a){
		return isitsosu(st,mid-1,a);
	}else{
		return isitsosu(mid+1,end,a);
	}
}
int main(){
	
	sosusetting();
	
	int t;scanf("%d",&t);
	while(t--){
		
		int n;scanf("%d",&n);
		int a=0;
		
		for(int i=0;sosulist[i]<=n/2;i++){
			if(isitsosu(0,sosugaesoo,n-sosulist[i])){
				a++;
			}
		}
		printf("%d\n",a);
	}
    return 0;
}



