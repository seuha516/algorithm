#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>
#include <stack>

using namespace std;

vector <int> v;
stack <pair<int,int> >s;
stack <int> dap;


int main(){
	
	int n;scanf("%d",&n);
	v.push_back((-1)*(1<<30));
	
	int past=-1; int pastsize=0;
	
	while(n--){
		int x;scanf("%d",&x);
		if(x>v.back()){
			v.push_back(x);
			s.push(pair<int,int>(v.size()-2,x));
		}else{
			vector<int>::iterator iter=lower_bound(v.begin(),v.end(),x);
			v[iter-v.begin()]=x;
			s.push(pair<int,int>(iter-v.begin()-1,x));
		}
	}

	printf("%d\n",v.size()-1);
	
	int ttt=v.size()-2;
	while(!s.empty()){
		if(s.top().first==ttt){
			dap.push(s.top().second); ttt--;
		}
		s.pop();
	}
	while(!dap.empty()){
		printf("%d ",dap.top()); dap.pop();
	}
	return 0;
}

