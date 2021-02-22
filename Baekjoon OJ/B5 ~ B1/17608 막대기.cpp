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
	}
	
	int t=0; int dap=0;
	for(int i=v.size()-1;i>=0;i--){
		if(v[i]>t){
			dap++; t=v[i];
		} 
	}
		
	printf("%d",dap);
	
}


