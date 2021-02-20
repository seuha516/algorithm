#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <set>
#include <utility>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	priority_queue<int,vector<int>,greater<int>> v;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push(x);
	}
	
	int dap=0;
	for(int i=1;i<n;i++){
		int t1=v.top(); v.pop(); int t2=v.top(); v.pop();
		dap+=t1+t2; v.push(t1+t2);
	}
	printf("%d",dap);
	
	
	return 0;
}

