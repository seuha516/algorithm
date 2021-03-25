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
		vector<int> v; priority_queue<int> pq;
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x); 
		}
		sort(v.begin(),v.end());
		vector<int> V;
		int cnt=1;
		for(int i=1;i<n;i++){
			if(v[i-1]!=v[i]){
				pq.push(cnt);
				cnt=1;
				continue;
			}
			cnt++;	
		}pq.push(cnt);
		int dap=0;
		while(pq.size()>=2){
			int a=pq.top(); pq.pop(); int b=pq.top(); pq.pop();
			a--; b--;
			dap++;
			if(a) pq.push(a);
			if(b) pq.push(b);
		}
		printf("%d\n",n-dap-dap);		
	}
	
	return 0;
}
