#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		vector<int> ori;
		vector<pair<int,int>> v;
		int n; scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back({x,i}); ori.push_back(x);
		}
		sort(v.begin(),v.end());
		
		int end=n-1; // v : 0~end 
		int now=n-1;
		while(end>=0){
			if(v[now].second<=end){
				for(int i=v[now].second;i<=end;i++){
					printf("%d ",ori[i]);
				}
				end=v[now].second-1;
			}
			now--;			
		}
		printf("\n");
		
	}
	
	return 0;
}


