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
	
	int N, R1, C1, R2, C2;	scanf("%d %d %d %d %d", &N, &R1, &C1, &R2, &C2);
	for (int i = R1; i <= R2; i++) {
		
		int row = i % (2 * N - 1);
		row = N - 1 - row;
		row = row > 0 ? row : -row;	
		
		for (int j = C1; j <= C2; j++) {
			int column = j % (2 * N - 1);
			column = N - 1 - column;
			column = column > 0 ? column : -column;
			if (row + column <= N - 1) {
				printf("%c", ('a' - 19 + row + column) % 26 + 'a');
			} else {
				printf(".");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}

