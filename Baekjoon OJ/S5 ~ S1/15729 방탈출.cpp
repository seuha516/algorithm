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
	
	vector<int> v;
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}
	int dap=0;
	for(int i=0;i<n;i++){
		if(v[i]==1){
			v[i]=1-v[i];
			if(i+1<n) v[i+1]=1-v[i+1];
			if(i+2<n) v[i+2]=1-v[i+2];
			dap++;
		}
	}
	cout<<dap;
	
	return 0;
}

