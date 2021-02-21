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
#include <set>
#include <functional>

using namespace std;

int arr[51][51];

void howmany(int R,int C){
	int dap=0;
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			if(arr[i][j]!=-1){
				dap+=arr[i][j];
			}	
		}
	}printf("%d",dap);
}

int main(){
	
	vector <pair<int,int> > air;
	
	int R,C,T; scanf("%d %d %d",&R,&C,&T); int cnt=0;
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==-1){
				air.push_back(pair<int,int>(i,j));
			}
		}
	}
	
	while(T--){
		
		int temp[51][51]={0,};
		for(int i=1;i<=R;i++){
			for(int j=1;j<=C;j++){
				if(arr[i][j]>0){
					
					int ajswldid=arr[i][j]/5;
					
					if(i-1>=1){
						if(arr[i-1][j]!=-1){
							temp[i][j]-=ajswldid;
							temp[i-1][j]+=ajswldid;
						}
					}
					if(i+1<=R){
						if(arr[i+1][j]!=-1){
							temp[i][j]-=ajswldid;
							temp[i+1][j]+=ajswldid;
						}
					}
					if(j-1>=1){
						if(arr[i][j-1]!=-1){
							temp[i][j]-=ajswldid;
							temp[i][j-1]+=ajswldid;
						}
					}
					if(j+1<=C){
						if(arr[i][j+1]!=-1){
							temp[i][j]-=ajswldid;
							temp[i][j+1]+=ajswldid;
						}
					}
					
				}
			}
		}
		
		for(int i=1;i<=R;i++){
			for(int j=1;j<=C;j++){
				arr[i][j]+=temp[i][j];
			}
		}
		
		int x1,y1; 
		x1=air[0].first; 
		y1=air[0].second;
		
		for(int i=x1-2;i>=1;i--){
			arr[i+1][1]=arr[i][1];
		}
		for(int i=2;i<=C;i++){
			arr[1][i-1]=arr[1][i];
		}
		for(int i=2;i<=x1;i++){
			arr[i-1][C]=arr[i][C];
		}
		for(int i=C-1;i>=2;i--){
			arr[x1][i+1]=arr[x1][i];
		}
		arr[x1][2]=0;
		
		for(int i=x1+3;i<=R;i++){
			arr[i-1][1]=arr[i][1];
		}
		for(int i=2;i<=C;i++){
			arr[R][i-1]=arr[R][i];
		}
		for(int i=R-1;i>=x1+1;i--){
			arr[i+1][C]=arr[i][C];
		}
		for(int i=C-1;i>=2;i--){
			arr[x1+1][i+1]=arr[x1+1][i];
		}
		arr[x1+1][2]=0;
	}
	howmany(R,C);
		
	return 0;
}

