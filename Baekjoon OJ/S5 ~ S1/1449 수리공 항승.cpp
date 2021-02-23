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
	
	int n,l; scanf("%d %d",&n,&l);
	vector<int> v;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}sort(v.begin(),v.end());
	
	int dap=1;
	int min=v[0]+l;
	for(int i=1;i<n;i++){
		if(v[i]<min)continue;
		dap++;
		min=v[i]+l;
	}
	cout<<dap;
	
	return 0;
}




