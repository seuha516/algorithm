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
void sosuprint(){
   for(int i=0;i<sosugaesoo;i++){
      printf("%d번째 소수: %d\n",i,sosulist[i]);
   }
   printf("0~%d 사이 소수의 개수: %d\n",sosubumui,sosugaesoo);
}

int gcd(int a,int b){
   int w;
   while(b){
      w=a%b;
      a=b;
      b=w;
   }
   return a;
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
	
	while(1){
		
		int n; 
		scanf("%d",&n);
		
		if(n==0) break;
		
		int a=-1;
		
		for(int i=1;i<sosugaesoo&&sosulist[i]<n;i++){
			if(isitsosu(1,sosugaesoo,n-sosulist[i])){
				a=sosulist[i]; break;
			}
		}
		
		if(a==-1){
			printf("Goldbach's conjecture is wrong.\n");
		}else{
			printf("%d = %d + %d\n",n,a,n-a);
		}	
		
	}
  
    return 0;
}



