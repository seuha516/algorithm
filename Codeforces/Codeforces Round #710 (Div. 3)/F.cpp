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
		int n; scanf("%d",&n);
		vector<pair<int,int>> v;
		
		vector<int> R,C;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); R.push_back(x);
		}
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); C.push_back(x);
		}
		for(int i=0;i<n;i++){
			v.push_back({R[i],C[i]});
		}
		sort(v.begin(),v.end());
		
		
		pair<int,int> past={1,1};
		int dap=0;
		for(int i=0;i<n;i++){
			int pf=past.first, ps=past.second, vf=v[i].first, vs=v[i].second;
			if(pf==vf&&ps==vs){
				continue;
			}else{
				if((pf+ps)%2==0){
					if(pf-ps==vf-vs){
						dap+=vf-pf;
					}else if(pf+1-ps==vf-vs){
						dap+=0;
					}else{
						dap+=(vf-vs)/2 - (pf-ps)/2;
					}
				}else{
					if(pf-ps==vf-vs){
						dap+=0;
					}else{
						dap+=(vf-vs)/2 - (pf-ps)/2;
					}
				}
			}
			
			past=v[i];
		}
		printf("%d\n",dap);
		
		
			
	}
	
	return 0;
}
