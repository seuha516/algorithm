#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    int x;scanf("%d",&x);
    
    long long int arr[100]={0};
    arr[1]=1; arr[2]=1;
    for(int i=3;i<100;i++){
    	arr[i]=arr[i-2]+arr[i-1];
	}
    printf("%lld",arr[x]);
   
    
    return 0; 
}

