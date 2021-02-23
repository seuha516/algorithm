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

using namespace std;

int main(){
	
	int n,q,k; scanf("%d %d %d",&n,&q,&k);
	vector<int> list; 
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); list.push_back(x);
	}
	
	for(int i=0;i<q;i++){
		int l,r; scanf("%d %d",&l,&r); l--; r--;
		int dap=2*(list[r]-list[l]-1-r+l+1)+list[l]-1+k-list[r];
		
		printf("%d\n",dap);
	}
	
	return 0;
}

