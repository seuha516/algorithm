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
	
	int n;scanf("%d",&n); 

	while(n--){
		vector <int> v;
		
		int a; a=10;
		for(int i=0;i<a;i++){
			int x; scanf("%d",&x); v.push_back(x);
		} 
		
		sort(v.begin(),v.end());
		printf("%d\n",v[7]);
		
	}
	
	return 0;
}


