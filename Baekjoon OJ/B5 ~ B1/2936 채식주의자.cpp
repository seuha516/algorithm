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
	
	int a, b; scanf("%d %d", &a, &b);
	if (a == 0 && b == 0) {
		printf("125.00 125.00");
	} else if (a == 0 && b == 250) {
		printf("125.00 0.00");
	} else if (a == 250 && b == 0) {
		printf("0.00 125.00");
	} else if (a == 125 && b == 125) {
		printf("0.00 0.00");
	} else if (a == 0) {
		if (b == 125) {
			printf("250.00 0.00");
		} else if (b < 125) {
			double x = 31250.0 / (250.0 - b);
			double y = 250.0 - x;
			x = (int) (x * 100 + 0.5) / 100.0;
			y = (int) (y * 100 + 0.5) / 100.0;
			printf("%.2lf %.2lf", x, y);
		} else{
			double x = 31250.0 / b;
			x = (int) (x * 100 + 0.5) / 100.0;
			printf("%.2lf 0.00", x);
		}
	} else if (b == 0) {
		if (a == 125) {
			printf("0.00 250.00");
		} else if (a < 125) {
			double y = 31250.0 / (250.0 - a);
			double x = 250.0 - y;
			y = (int) (y * 100 + 0.5) / 100.0;
			x = (int) (x * 100 + 0.5) / 100.0;
			printf("%.2lf %.2lf", x, y);
		} else{
			double y = 31250.0 / a;
			y = (int) (y * 100 + 0.5) / 100.0;
			printf("0.00 %.2lf", y);
		}
	} else if (a < 125) {
		double x = 250.0 - 31250.0 / b;
		x = (int) (x * 100 + 0.5) / 100.0;
		printf("%.2lf 0.00", x);
	} else {
		double y = 250.0 - 31250.0 / a;
		y = (int) (y * 100 + 0.5) / 100.0;
		printf("0.00 %.2lf", y);
	}

	return 0;
}


