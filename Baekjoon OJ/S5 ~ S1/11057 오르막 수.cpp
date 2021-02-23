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
    
	int arr[1005][10]={0,};
	int hap[1005]={0,};
	
	for(int i=1;i<=x;i++){
		int t=0;
		if(i==1){
			for(int j=0;j<=9;j++){
				arr[i][j]=1;
				t+=arr[i][j];
			}
			hap[i]=t;
		}else{
			for(int j=0;j<=9;j++){
				for(int k=0;k<=j;k++){
				arr[i][j]+=arr[i-1][k]%10007;
				arr[i][j]%10007;
				}
				t+=arr[i][j]%10007;
			}	
			hap[i]=t%10007;
		}
	}
	

	printf("%d",hap[x]%10007);
	
    return 0; 
}

