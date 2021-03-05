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
template <typename T>
void showvec(vector<T>& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		cout << *(v.begin()+i) << " ";
	}printf("\n");
}

map<vector<int>,int> dap;

void ready(){
	for(int i=1;i<=8;i++){
		vector<int> v; for(int j=0;j<i;j++) v.push_back(j);
		queue<vector<int>> q;
		q.push(v); dap[v]=0;
		while(!q.empty()){
			vector<int> now=q.front(); q.pop();
			int level=dap[now];
			for(int j=0;j<i-1;j++){
				for(int k=2;k<=i;k++){
					reverse(now.begin()+j,now.begin()+k);
					if(dap.count(now)==0){
						q.push(now); dap[now]=level+1;
					}
					reverse(now.begin()+j,now.begin()+k);
				}
			}
		}
	}
}

int main(){
	
	ready();
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		vector<int> v,temp;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x); temp.push_back(x);
		}
		sort(temp.begin(),temp.end());
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(v[i]==temp[j]){v[i]=j; break;}
			}
		}
		printf("%d\n",dap[v]);
	}
	
	return 0;
}
