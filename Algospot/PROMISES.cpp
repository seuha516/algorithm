#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

template <typename T>
void showarr_2(T(*arr)[300],int a,int b){  
	printf("\n< array >\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout << arr[i][j] << " ";
		}printf("\n");
	}printf("\n");
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int v,m,n; scanf("%d %d %d",&v,&m,&n);
		int d[300][300];
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				if(i==j) d[i][j]=0;
				else d[i][j]=987654321;
			}
		}
		for(int i=0;i<m;i++){
			int a,b,c; scanf("%d %d %d",&a,&b,&c);
			d[a][b]=d[b][a]=min(d[a][b],c);
		}
		for(int k=0;k<v;k++){
			for(int i=0;i<v;i++){
				for(int j=0;j<v;j++){
					d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
				}
			}
		}
		int dap=0;
		for(int i=0;i<n;i++){
			int a,b,c; scanf("%d %d %d",&a,&b,&c);
			if(d[a][b]<=c) dap++;
			else{
				for(int j=0;j<v;j++){
					for(int k=0;k<v;k++){
						int newd=min(d[j][a]+d[b][k],d[j][b]+d[a][k])+c;
						d[j][k]=min(d[j][k],newd);
					}
				}
			}
		}
		printf("%d\n",dap);
	}
	
	return 0;
}

