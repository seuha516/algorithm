#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		int m[10005]={0,}; int e[10005]={0,};
		for(int i=0;i<n;i++){
			scanf("%d",&m[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&e[i]); e[i]*=-1;
		}
		vector<pair<int, int > > v;
		
		for(int i=0;i<n;i++){
			v.push_back(make_pair(e[i],m[i]));
		}
		sort(v.begin(),v.end());
		
		int dap=0;
		int time=0;
		for(int i=0;i<n;i++){time+=v[i].second;
			dap=max(dap,time-v[i].first);
			
		}
		printf("%d\n",dap);
	}
	
	return 0;	
}
