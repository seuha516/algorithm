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

int n,m;
vector<int> ins;
int arr[1005][1005];

vector<vector<int>> floyd(){
	vector<vector<int>> ret(n); for(int i=0;i<n;i++) ret[i]=vector<int>(n);
	vector<vector<int>> dap(n); for(int i=0;i<n;i++) dap[i]=vector<int>(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ret[i][j]=arr[i][j];
			dap[i][j]=arr[i][j];
		}
	}
	vector<pair<int,int>> order;
	for(int i=0;i<n;i++) order.push_back({ins[i],i}); sort(order.begin(),order.end());
	
	for(int k=0;k<n;k++){
		int w=order[k].second;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ret[i][j]=min(ret[i][j],ret[i][w]+ret[w][j]);
				dap[i][j]=min(dap[i][j],ret[i][w]+ret[w][j]+ins[w]);
			}
		}
	}
	return dap;
} 

int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); ins.push_back(x);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=987654321;
			if(i==j) arr[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c); a--; b--;
		arr[a][b]=c; arr[b][a]=c;
	}
	
	vector<vector<int>> dap=floyd();
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int a,b; scanf("%d %d",&a,&b); a--; b--;			
		printf("%d\n",dap[a][b]);
	}
	
	return 0;
}
