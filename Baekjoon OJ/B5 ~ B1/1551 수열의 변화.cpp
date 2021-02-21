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
	
	int n,k; scanf("%d %d",&n,&k);
	vector<int> v;
	for(int i=0;i<n;i++){
		int x; scanf("%d,",&x); v.push_back(x);
	}
	for(int i=1;i<=k;i++){
		int t=n-i;
		for(int j=0;j<t;j++){
			v.push_back(v[j+1]-v[j]);
		}	
		for(int j=0;j<=t;j++){
			v.erase(v.begin());
		}
	}	
	for(int i=0;i<v.size();i++){
		printf("%d",v[i]);
		if(i!=v.size()-1)printf(",");
	}
	
	return 0;
}

