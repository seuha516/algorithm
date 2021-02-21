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
#include <stack>

using namespace std;

vector <int> v;

int main(){
	
	int n;scanf("%d",&n);
	v.push_back((-1)*(1<<30));
	
	while(n--){
		int x;scanf("%d",&x);
		if(x>v.back()){
			v.push_back(x);
		}else{
			vector<int>::iterator iter=lower_bound(v.begin(),v.end(),x);
			v[iter-v.begin()]=x;
		}		
	}
	printf("%d",v.size()-1);
		
	return 0;
}

