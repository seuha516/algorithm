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
	
	int N, new_score, P; scanf("%d %d %d", &N, &new_score, &P);
	vi v;
	while (N--) {
		int data; scanf("%d", &data); v.push_back(data);
	}
	if (v.size() == P && v[v.size() - 1] >= new_score) {
		cout << -1;
	} else if (find(v.begin(), v.end(), new_score) != v.end()) {
		cout << find(v.begin(), v.end(), new_score) - v.begin() + 1;
	} else {
		v.push_back(new_score);
		sort(v.begin(), v.end(), greater<>());
		cout << find(v.begin(), v.end(), new_score) - v.begin() + 1;
	}

	return 0;
}

