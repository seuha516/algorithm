#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>

using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}


int main()
{
    int x;scanf("%d",&x);
    
   	int list[100005];
   	int c=0; int cprime=0;
   	for(int i=1;i<=sqrt(x);i++){
   		if(x%i==0){
   			list[c++]=i;
		}		
	}
	cprime=c;
	for(int i=0;i<c;i++){
		int t=list[i];
		int td=x/t;
		if((t+td)%2==0&&(t+td)*(t+td)/4!=x){
			list[i]=(t+td)/2;
		}else{
			list[i]=10000000;cprime--;
		}
	}
   	
   	sort(list,list+c);
   	
   	if(cprime<=0){
   		printf("-1");return 0;
	}
   	
   	for(int i=0;i<cprime;i++){
   		printf("%d\n",list[i]);	
	}
    
    return 0; 
}

