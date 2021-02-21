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
	while(n--){
		int x;scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());
	int dap=0;
	for(int i=0;i<v.size()-1;i++){
		dap+=v[i];
	}printf("%d",dap);
	return 0;
}


