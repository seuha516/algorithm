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

int N, K, ones, total_length;
ll answer;
vpii data_list;
set<int> numbers;
int pre_list[32768][100];
int length_list[32768];
int pre_calc[100][800];

template <typename T>
T gcd(T a, T b) {
	return a % b == 0 ? b : gcd(b, a % b);
}

void start(ll code, int mod, int length, int level) {
	if (level == N >> 1) {
		numbers.insert(code);
		pre_list[code][mod]++;
		length_list[code] = length;
		return;
	}
	
	for (int i = 0; i < N; i++) {
		if (code & (1 << i)) continue;
		start(code | (1 << i), (mod + pre_calc[data_list[i].first][length]) % K, length + data_list[i].second, level + 1);
	}
}

int main() {
	
	scanf("%d", &N); vector<string> v; ones = (1 << N) - 1;
	for (int i = 0; i < N; i++) {
		string s; cin >> s; v.push_back(s); total_length += s.length();
	}
	scanf("%d", &K);
	
	for (int i = 0; i < N; i++) {
		string s = v[i];
		int mod = 0; int length = s.length();
		for (int j = 0; j < s.size(); j++) {
			mod *= 10; mod += (s[j] - '0');
			if (mod > K) mod %= K;
		}
		data_list.push_back({mod, length});
	}
	
	for (int i = 0; i < 100; i++) {
		int x = i;
		for (int j = 0; j < 800; j++) {
			x %= K;
			pre_calc[i][j] = x;
			x *= 10;
		}
	}
		
	start(0, 0, 0, 0);
	
	for (const auto& c : numbers) {
		if (N & 1) {
			for (int k = 0; k < N; k++) {
				if (c & (1 << k)) continue;
				ll code = c | (1 << k);
				int length = length_list[c] + data_list[k].second;
				for (int i = 0; i < K; i++) {
					int mod = i;
					int mod_count = pre_list[c][i];
					if (mod_count == 0) continue;
					mod = pre_calc[mod][data_list[k].second];
					mod += data_list[k].first; mod %= K;
					mod = pre_calc[mod][total_length - length];
					answer += (ll)mod_count * (ll)pre_list[ones ^ code][(K - mod) % K];
				}
			}
		} else {
			int length = length_list[c];
			for (int i = 0; i < K; i++) {
				int mod = i;
				int mod_count = pre_list[c][i];
				if (mod_count == 0) continue;
				mod = pre_calc[mod][total_length - length];
				answer += (ll)mod_count * (ll)pre_list[ones ^ c][(K - mod) % K];
			}
		}
	}
	
	if (answer == 0) {
		printf("0/1");
	} else {
		ll total = 1; for(ll i = 1; i <= N; i++) total *= i;
		ll g = gcd(answer, total);
		printf("%lld/%lld", answer / g, total / g);
	}
	
	return 0;
}







