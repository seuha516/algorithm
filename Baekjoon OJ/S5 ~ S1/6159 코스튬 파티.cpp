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
	
	int n,s; scanf("%d %d",&n,&s);
	vector <int> v;
	for(int i=0;i<n;i++){
		int x;scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());
	
	int dap=0;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]+v[j]>s) break;
			else dap++;
		}
		if(v[i]>s) break;
	}
	printf("%d",dap);
	
	return 0;
}





