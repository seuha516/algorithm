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
		vector<int> a,b,t;
		for(int i=0;i<n;i++){
			int x,y; scanf("%d %d",&x,&y); a.push_back(x); b.push_back(y);
		}
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); t.push_back(x);
		}
		int now=0;
		for(int i=0;i<n;i++){
			now=now+a[i]+t[i]-(i==0?0:b[i-1]); if(i==n-1) break;
			now=max(now+(b[i]-a[i]+1)/2,b[i]); 
		}
		printf("%d\n",now);
	}
	
	return 0;
}







