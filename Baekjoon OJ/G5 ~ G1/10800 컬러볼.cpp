#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 1
#define intmax 2147483647
#define LIMIT 10000

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	int dap[200005]={0,};
	int deep[200005]={0,};
	vector<int> temp[2005];
	
	vector<pair<pair<int,int>,int> > v;
	
	for(int i=0;i<n;i++){
		int a,b; scanf("%d %d",&a,&b);
		v.push_back(make_pair(make_pair(b,a),i));		
	}
	
	sort(v.begin(),v.end());
	
	int d=v[0].first.first; dap[v[0].second]=0; deep[v[0].first.second]=v[0].first.first; 
	temp[v[0].first.first].push_back(v[0].first.second);
	for(int i=1;i<n;i++){
		int num=v[i].second; int amount=v[i].first.first; int color=v[i].first.second;
		
		if(amount==v[i-1].first.first){
			int x=count(temp[amount].begin(),temp[amount].end(),color);
			dap[num]-= (temp[amount].size()-x) * amount;
		}
		
		dap[num]+=d-deep[color];
		deep[color]+=amount; 
		d+=amount;
		temp[amount].push_back(color);
	}
	
	for(int i=0;i<n;i++){
		printf("%d\n",dap[i]);
	}
	
	return 0;	
}


