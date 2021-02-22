#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int x;scanf("%d",&x);
    
    int arr[1000005]={0,};    
    for(int i=0;i<x;i++){
    	scanf("%d",arr+i);
	}
	
	int b,c; scanf("%d %d",&b,&c);
    
    long long int total=0;
    
    for(int i=0;i<x;i++){
    	int cnum=arr[i];
    	int t1,t2;
		cnum-=b;
		t2=1;
		if(cnum<0){
			
		}else if(cnum%c==0){
    		t2+=cnum/c;
		}else{
			t2+=cnum/c+1;
		}
    	total+=t2;
	}
	printf("%lld",total);
    
    return 0; 
}

