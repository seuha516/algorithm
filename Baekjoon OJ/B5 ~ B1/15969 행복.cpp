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

using namespace std;

int main(){
	
	vector <int> v;
	int t;scanf("%d",&t);
	for(int i=0;i<t;i++){
		int a;scanf("%d",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	
	printf("%d",v[v.size()-1]-v[0]);
	 
	
	return 0;
}
