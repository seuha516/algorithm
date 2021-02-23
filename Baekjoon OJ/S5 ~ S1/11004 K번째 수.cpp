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
	
	int n,m;scanf("%d %d",&n,&m);vector <int>v;
	while(n--){
		int x;scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());printf("%d",v[m-1]);
	
	
	
	return 0;
}




