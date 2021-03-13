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
		vector<int> v;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		int vsize=v.size();
		stack<int>dap;
		int deep=vsize;
		for(int i=vsize-1;i>=0;i--){
			deep=min(deep,i+1-v[i]);
			if(deep<=i)dap.push(1);
			else dap.push(0);
		}
		while(!dap.empty()){
			printf("%d ",dap.top()); dap.pop();
		}
		printf("\n");
	}
	
	return 0;
}







