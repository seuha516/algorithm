#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int n; 
vector<int>v;

int cache[255];

int lis(int st){
	int &ret=cache[st]; if(ret!=-1)return ret;
	
	ret=1;
	for(int i=st+1;i<n;i++){
		if(v[st] < v[i]){
			ret=max(ret,1+lis(i));
		}
	}
	return ret;
}

int main(){
	
	for(int i=0;i<255;i++){
		cache[i]=-1;
	}
	scanf("%d",&n);
	v.push_back(-11);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}n++;
	
	printf("%d\n",n-lis(0));
		
	return 0;
}

