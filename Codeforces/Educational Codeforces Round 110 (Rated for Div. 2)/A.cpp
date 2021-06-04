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
		
		vector<int> v;
		for(int i=0;i<4;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		int a=max(v[0],v[1]);
		int b=max(v[2],v[3]);
		sort(v.begin(),v.end());
		int A=max(a,b);
		int B=min(a,b);
		int AA=v[3];
		int BB=v[2];
		if(A==AA && B==BB){
			printf("YES\n");
		}else printf("NO\n");
		
	}
	
	return 0;
}

