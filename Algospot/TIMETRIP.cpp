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

vector<int> bellman(const vector<pair<int,int>> adj[],int n,int st){
	vector<int> upper(n,987654321);
	upper[st]=0;
	bool updated;
	for(int i=0;i<n;i++){
		updated=0;
		for(int j=0;j<n;j++){
			if(upper[j]==987654321) continue; //영향 없는 음의 사이클 
			for(int k=0;k<adj[j].size();k++){
				int next=adj[j][k].first;
				int cost=adj[j][k].second;
				if(upper[next]>upper[j]+cost){
					upper[next]=upper[j]+cost; updated=1;
				}
			}
		}
		if(!updated) break;
	}
	if(updated) upper.clear();
	return upper;
} 

int main(){
	
		
	
	return 0;
}
