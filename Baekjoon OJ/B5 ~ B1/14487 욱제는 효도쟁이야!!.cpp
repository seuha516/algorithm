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
	
	int n;scanf("%d",&n);
	vector <int> v;int hap=0;
	while(n--){
		int x;scanf("%d",&x);v.push_back(x);
			hap+=x;
	}
	sort(v.begin(),v.end());
	printf("%d",hap-v[v.size()-1]);

	return 0;
}


