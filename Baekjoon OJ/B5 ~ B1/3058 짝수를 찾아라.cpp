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
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}

int main(){
	
	int x; scanf("%d",&x);

	int total=0;
	int minval=1000000;
	
	for(int i=0;i<x;i++){
		for(int j=0;j<7;j++){
			int t;scanf("%d",&t);
			if(t%2==0){
				minval=min(minval,t);total+=t;
			}	
		}		
		printf("%d %d\n",total,minval);
		minval=1000000; total=0;
	}


	return 0;

}

