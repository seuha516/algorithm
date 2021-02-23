#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int arr[500010]={0};

int findd(int start,int end, int soo){
	
	if(start>end){
		return 0;
	}else{
		int m=start+end; m/=2;
		
		if(arr[m]>soo){
			return findd(start,m-1,soo);
			
		}else if(arr[m]<soo){
			return findd(m+1,end,soo);
			
		}else{
			return 1;
		}
		
	}
	
}


int main(){

    int x; scanf("%d",&x);

    for(int i=0;i<x;i++){
    	int y; scanf("%d",&y);
    	arr[i]=y;
	}

	sort(arr,arr+x);


	int xx; scanf("%d",&xx);


    for(int i=1;i<=xx;i++){
    	
    	int t;scanf("%d",&t);
    	
    	printf("%d ",findd(0,x-1,t));

	}

    return 0;
}

