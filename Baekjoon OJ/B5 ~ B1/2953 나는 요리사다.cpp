#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){
	
	int x=5; 
	int tid=0; int tsco=0;
	
    for(int i=0;i<x;i++){
    	int a,b,c,d;
    	scanf("%d %d %d %d",&a,&b,&c,&d);
    	int t=a+b+c+d;
    	tsco=max(tsco,t);
    	if(tsco==t){
    		tid=i+1;
		}
    	
	}
	printf("%d %d",tid,tsco);
	
    return 0;
}

