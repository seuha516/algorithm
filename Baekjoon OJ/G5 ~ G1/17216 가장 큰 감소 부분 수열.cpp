#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647

using namespace std;

int n; 
vector<int> v;

int cache[1005];

int go(int st){
	int &ret=cache[st];
	if(ret!=-1)return ret;
	ret=v[st];
	for(int i=st+1;i<n;i++){
		if(v[st]>v[i]){
			ret=max(ret,v[st]+go(i));
		}
	}
	return ret;
}

int main(){
	
	scanf("%d",&n); v.push_back(10000);
	for(int i=0;i<1005;i++)cache[i]=-1;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}n++;
	
	printf("%d",go(0)-10000);
	
	return 0;	
}


