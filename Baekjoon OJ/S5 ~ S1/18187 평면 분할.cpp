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
	
	int n; scanf("%d",&n);
	int dap=1; int t=1;
	for(int i=0;i<n;i++){
		if(i%3) t++;
		dap+=t;
	}
	cout<<dap;
	
	return 0;
}

