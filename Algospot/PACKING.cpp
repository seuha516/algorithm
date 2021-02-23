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

#define TEST 0

using namespace std;

int n, w; 
vector<int> cache[102][1002];

vector<int> pick(vector<int> &v,vector<int> &need, int st, int nowv){
	
	if(cache[st][nowv].back()!=-1) return cache[st][nowv];
	
	vector<int> r; r.push_back(0);
	
	if(st==n){
		return r;
	}
	
	vector<int> &ret=cache[st][nowv];
	ret=r;
	
	if(nowv+v[st]>w){
		return ret = pick(v,need,st+1,nowv);
	}else{
		vector<int> c1=pick(v,need,st+1,nowv);
		vector<int> c2=pick(v,need,st+1,nowv+v[st]);
		int choice1=c1[0];
		int choice2=c2[0]+need[st];
		if(choice1 >= choice2){
			return ret = c1;
		}else{
			c2[0]+=need[st];
			c2.push_back(st);
			return ret = c2;
		}
	}
}


int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		
		for(int i=0;i<102;i++){for(int j=0;j<1002;j++){
		while(!cache[i][j].empty()) cache[i][j].pop_back();
		cache[i][j].push_back(-1);}}
		scanf("%d %d",&n,&w);
		string name[102]; vector<int> v; vector<int> need;
		for(int i=0;i<n;i++){
			cin >> name[i]; int x,y; scanf("%d %d",&x,&y); v.push_back(x); need.push_back(y);
		}
		vector<int>dap=pick(v,need,0,0);
		int vs=dap.size();
		printf("%d %d\n",dap[0],vs-1);
		
		for(int i=1;i<vs;i++){
			printf("%s\n",name[dap[i]].c_str());
		}		
	}
		
    return 0;
}
