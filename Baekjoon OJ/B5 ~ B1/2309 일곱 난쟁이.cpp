#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
	int arr[9]={0}; int t=0;
	for(int i=0;i<9;i++){
		scanf("%d",arr+i);t+=arr[i];
	}
	t-=100;
	int ok=1;
	for(int i=0;i<8;i++){
		if(ok==0){break;}
		for(int j=i+1;j<9;j++){
			if(ok==0){break;}
			if(arr[i]+arr[j]==t){
				arr[i]=10000;arr[j]=10000;ok=0;
			}
		}
	}
	sort(arr,arr+9);
   for(int i=0;i<7;i++){
		printf("%d\n",arr[i]);
	}
    
    return 0; 
}

