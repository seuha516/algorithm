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
	
	int x; scanf("%d",&x); int t=0;
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,k; scanf("%d %d",&n,&k);
		t+=n*k;
	}
	string s = t==x? "Yes" : "No";
	cout << s;
	
	return 0;
}



