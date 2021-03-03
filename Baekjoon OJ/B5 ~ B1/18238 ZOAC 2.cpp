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
	
	int now='A';
	int dap=0;
	string s; cin >> s;
	for(int i=0;i<s.length();i++){
		dap+=min(abs(s[i]-now),26-abs(s[i]-now));
		now=s[i];
	}
	cout<<dap;
	
	return 0;
}

