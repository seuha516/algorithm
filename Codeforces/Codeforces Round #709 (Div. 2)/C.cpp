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


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		bool ok=1;
		
		int n,m; scanf("%d %d",&n,&m);
		int limit=(m+1)/2;
		
		vector<int> cnt(n,0);
		vector<int> dap(m,-1);
		
		vector<vector<int>> list(m);
		
		for(int i=0;i<m;i++){
			int k; scanf("%d",&k);
			for(int j=0;j<k;j++){
				int x; scanf("%d",&x); x--;
				list[i].push_back(x);
				
				if(k==1){
					dap[i]=x;
					cnt[x]++;
					
					if(cnt[x]>limit){
						ok=0; break;
					}
				}
			}
		}
		
		for(int i=0;i<m;i++){
			if(dap[i]!=-1) continue;
			int clear=0;
			for(int j=0;j<list[i].size();j++){
				int now=list[i][j];
				if(cnt[now]<limit){
					clear=1; cnt[now]++; dap[i]=now; break;
				}			
			}
		}
		
		for(int i=0;i<n;i++){
			if(cnt[i]>limit){
				ok=0; break;
			}
		}
		if(ok==0){
			printf("NO\n"); continue;
		}
		printf("YES\n");
		for(int i=0;i<m;i++){
			printf("%d ",dap[i]+1);
		}printf("\n");
	}
	
	return 0;
}


