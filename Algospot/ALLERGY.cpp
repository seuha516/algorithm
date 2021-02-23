#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int n, m;
vector<pair<string,long long> > people;
vector<vector<int> > like(55);
vector<long long>food;
long long target;
int dap;

void go(int who,int picked,long long score){
	
	if(score==target){
		dap=min(dap,picked); return;
	}
	if(picked>=dap) return;
	
	for(int i=0;i<like[who].size();i++){
		long long nextscore=score|food[like[who][i]];
		int next=0;
		long long xx=1;
		while(1){
			if(!(nextscore&xx))break;
			xx=xx<<1;
			next++;
		}
		go(next,picked+1,score|food[like[who][i]]);
		
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		dap=99;	target=0;
		people.clear();	food.clear();
		for(int i=0;i<55;i++)like[i].clear();
		
		
		scanf("%d %d",&n,&m);
		long long t=1;
		for(int i=0;i<n;i++){
			string s; cin>>s;
			people.push_back(make_pair(s,t));
			target+=t;
			t*=2;
		}
		for(int i=0;i<m;i++){
			int l; scanf("%d",&l);
			long long xx=0;
			for(int j=0;j<l;j++){
				string ss; cin>>ss;
				for(int k=0;k<n;k++){
					if(people[k].first==ss){
						xx+=people[k].second; 
						like[k].push_back(i);
						break;
					}
				}	
			}
			food.push_back(xx);	
		}
		
		go(0,0,0);
		printf("%d\n",dap);
	}		

	return 0;
}
