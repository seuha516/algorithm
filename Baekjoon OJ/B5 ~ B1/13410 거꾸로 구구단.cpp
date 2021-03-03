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
	
	int a,b; scanf("%d %d",&a,&b);
	int dap=0;
	for(int i=1;i<=b;i++){
		int x=i*a;
		queue<int> s;
		while(x){
			s.push(x%10); x/=10;
		}
		int t=0;
		while(!s.empty()){
			t*=10; t+=s.front(); s.pop();
		}
		dap=max(dap,t);
	}
	cout<<dap;
	
	return 0;
}

