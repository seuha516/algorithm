#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		int arr[100][100]={0,};
		int dis[100][100]={0,};
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		dis[0][0]=arr[0][0];
		for(int i=1;i<n;i++){
			for(int j=0;j<=i;j++){
				if(j==0){
					dis[i][j]=max(dis[i-1][j],0)+arr[i][j];
				}else{
					dis[i][j]=max(dis[i-1][j],dis[i-1][j-1])+arr[i][j];
				}
			}
		}
		int dap=0;
		for(int i=0;i<n;i++){
			dap=max(dap,dis[n-1][i]);
		}
		printf("%d\n",dap);	
		
	}	
	
    return 0;
}
