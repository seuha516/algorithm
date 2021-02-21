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

using namespace std;

int dap[6][6]; bool boo[100];

int main(){	

	int arr[6][6]; int temp[6][6];
	int n;
	for(int i=0;i<6;i++){
		dap[i][i]=1;
	}
	
	long long b;
	scanf("%d %lld",&n,&b);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int ttt=0;
	while(b){
		if(b%2==1){
			boo[ttt]=1;
		}ttt++;b/=2; 
	}
	

	if(boo[0]){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int tem=0;
				for(int k=0;k<n;k++){
					tem+=((dap[i][k]%1000)*(arr[k][j]%1000))%1000;
				}
				temp[i][j]=tem%1000;
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				dap[i][j]=temp[i][j]%1000;
			}
		}
	}
	
	for(int u=1;u<100;u++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int tem=0;
				for(int k=0;k<n;k++){
					tem+=((arr[i][k]%1000)*(arr[k][j]%1000))%1000;
				}
				temp[i][j]=tem%1000;
			}
		}
	
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				arr[i][j]=temp[i][j]%1000;
			}
		}
	
		if(boo[u]){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					int tem=0;
					for(int k=0;k<n;k++){
						tem+=((dap[i][k]%1000)*(arr[k][j]%1000))%1000;
					}
					temp[i][j]=tem%1000;
				}
			}
			
			
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					dap[i][j]=temp[i][j]%1000;
				}
			}
		} 
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",dap[i][j]%1000);
		}printf("\n");
	}

	return 0;
}


