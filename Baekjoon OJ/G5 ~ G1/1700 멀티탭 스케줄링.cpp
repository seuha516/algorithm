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
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
	
	int n, k; scanf("%d %d",&n,&k);
	bool on[105]={0,}; int dap=0;
	int use=0;
	
	vector<int> order;
	for(int i=0;i<k;i++){
		int x; scanf("%d",&x); order.push_back(x);
	}
	
	for(int i=0;i<k;i++){
		int now=order[i];
		if(on[now]){
			continue;
		}else if(use<n){
			use++; on[now]=1; continue;
		}else{
			vector<int> current;
			for(int j=0;j<105;j++){
				if(on[j]) current.push_back(j);
			}
			for(int j=i;j<k;j++){
				if(on[order[j]]){
					if(find(current.begin(),current.end(),order[j])!=current.end())current.erase(find(current.begin(),current.end(),order[j]));
				}
				if(current.size()==1) break;
			}
			on[current[0]]=0; on[now]=1; dap++;
		}
	}
	printf("%d",dap);
	
	return 0;
}


