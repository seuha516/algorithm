#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	vector <int> v;
	int n;scanf("%d",&n);
	while(n--){
		int x;scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());for(int i=0;i<v.size();i++)printf("%d ",v[i]);
	return 0;	
}
