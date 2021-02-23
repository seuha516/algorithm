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
	
	int n,m;scanf("%d %d",&n,&m); int t =n+m; vector <int>x;
	while(t--){
		int ttt;scanf("%d",&ttt);
		x.push_back(ttt);
	}sort(x.begin(),x.end());for(int i=0;i<x.size();i++){
		printf("%d ",x[i]);
	}
	
	return 0;
}




