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
	while(1){
		int n;scanf("%d",&n); if(n==0) break;
		
		int p;scanf("%d",&p);
		
		vector<int> v;
		v.push_back(n+1-p);
		if(p%2==0){
				v.push_back(p-1); v.push_back(n+1-p+1);
			}
			else{
				v.push_back(p+1); v.push_back(n+1-p-1);
			}
			
		sort(v.begin(),v.end());
		
		printf("%d %d %d\n",v[0],v[1],v[2]);
	}
	
	return 0;
}


