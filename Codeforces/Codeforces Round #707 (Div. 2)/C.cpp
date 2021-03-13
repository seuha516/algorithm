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

vector<pair<int,int>> v;
int have[2500005];

int main(){
	
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back({x,i+1});
		have[x]++;
	}
	sort(v.begin(),v.end());
	
	int S=0, E=n-1;
	int s=1, e=n-2;
	while(1){
		if(v[S].first+v[E].first>v[s].first+v[e].first){
			E--; e--;
		}else if(v[S].first+v[E].first<v[s].first+v[e].first){
			S++; s++;
		}else{
			printf("YES\n");
			printf("%d %d %d %d",v[S].second,v[E].second,v[s].second,v[e].second);
			return 0;
		}
		if(s>=e) break;
	}
	printf("NO");
	
	return 0;
}







