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
	
	vector <int> v;
	
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);
		if(i==0){
			v.push_back(1); continue;
		}
		vector<int>::iterator iter;
		iter=v.insert(v.end()-x,i+1);
		
	}
	for(int i=0;i<n;i++){
		printf("%d ",v[i]);
	}
	
	return 0;
	
}

