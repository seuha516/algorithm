#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define vi vector<int>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vpii vector<pair<int, int>>
#define IFT if(TEST)
#define TEST 1

using namespace std;

int main() {
	
	int TC;	scanf("%d", &TC);
	while (TC--) {
		
		int n, a, b, c; scanf("%d %d %d %d", &n, &a, &b, &c); 
		if (a + b + c >= 55 && a >= 10.5 && b >= 7.5 && c >= 12) {
			cout << n << " " << a + b + c << " PASS\n";
		} else {
			cout << n << " " << a + b + c << " FAIL\n";
		}
		
	}

	return 0;
}

