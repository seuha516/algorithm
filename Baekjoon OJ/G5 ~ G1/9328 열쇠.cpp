#include <iostream>
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

int x_4[4] = {-1, 1, 0, 0}; int y_4[4] = {0, 0, -1, 1};

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		vvc map;
		vvi visited;
		set<char> key;
		vpii enterance;
		int answer = 0;
		int count = 1;
		
		int h, w; scanf("%d %d", &h, &w); getchar();
		for (int i = 0; i < h; i++) {
			char str[105]; fgets(str, 105, stdin);
			vector<char> temp; vector<int> temp2; 
			for (int j = 0; j < w; j++) {
				temp.push_back(str[j]);
				temp2.push_back(0);
				if (str[j] != '*' && ((i == 0 || i == h - 1) || (j == 0 || j == w - 1))) {
					enterance.push_back({i, j});
				}
			}
			map.push_back(temp);
			visited.push_back(temp2);
		}
		char str[105] = {}; fgets(str, 105, stdin);
		for (int i = 0; str[i] != 0; i++) key.insert(str[i]);
		
		for (int i = 0; i < enterance.size(); i++) {
			if (map[enterance[i].first][enterance[i].second] == '$') {
				answer++; map[enterance[i].first][enterance[i].second] = '.';
			} else if (map[enterance[i].first][enterance[i].second] >= 'a' && map[enterance[i].first][enterance[i].second] <= 'z') {
				key.insert(map[enterance[i].first][enterance[i].second]);
				map[enterance[i].first][enterance[i].second] = '.';
			} else if (map[enterance[i].first][enterance[i].second] >= 'A' && map[enterance[i].first][enterance[i].second] <= 'Z') {
				if (key.count(map[enterance[i].first][enterance[i].second] - ('A' - 'a')) > 0) {
					map[enterance[i].first][enterance[i].second] = '.';
				} else {
					continue;
				}
			}		
			
			stack<pii> location_stack;
			location_stack.push(enterance[i]);
			visited[enterance[i].first][enterance[i].second] = count;
			
			while (!location_stack.empty()) {
				pii top_element = location_stack.top();
				bool check = false;
				for (int k = 0; k < 4; k++) {
					int newI = top_element.first + x_4[k]; int newJ = top_element.second + y_4[k];
					
					if (newI < 0 || newI >= h || newJ < 0 || newJ >= w) {
						continue;
					} else if (map[newI][newJ] == '*' || visited[newI][newJ] == count) {
						continue;	
					} else if (map[newI][newJ] >= 'A' && map[newI][newJ] <= 'Z') {
						if (key.count(map[newI][newJ] - ('A' - 'a')) > 0) {
							map[newI][newJ] = '.';
						} else {
							continue;
						}
					} else if (map[newI][newJ] >= 'a' && map[newI][newJ] <= 'z') {
						key.insert(map[newI][newJ]);
						map[newI][newJ] = '.';
						i = -1; count++; break;
					} else if (map[newI][newJ] == '$') {
						answer++;
						map[newI][newJ] = '.';
					}
				
					location_stack.push({newI, newJ});
					visited[newI][newJ] = count;
					check = true;
				}
				if (i == -1) break;
				if (!check) location_stack.pop();
			}
		}
		
		printf("%d\n",answer);					
	}
	
	return 0;
}

