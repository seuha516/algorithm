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

using namespace std;

int main(){
	
	int n; vector<pair<int,int> >v;scanf("%d",&n);
	vector<pair<int,int> >vv;
	int cc=0;
	
	while(n--){
		int x;scanf("%d",&x);v.push_back(pair<int,int>(x,cc));cc++;
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++){
		vv.push_back(pair<int,int>(v[i].second,i));
	}	sort(vv.begin(),vv.end());
	for(int i=0;i<vv.size();i++){
		printf("%d ",vv[i].second);
	}
	return 0;
}


