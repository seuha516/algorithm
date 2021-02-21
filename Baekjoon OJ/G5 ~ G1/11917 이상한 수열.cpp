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

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	vector<int> v;
	set<int> s;
	
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x); s.insert(x);
	}
	int m; scanf("%d",&m);
	if(m<=n){
		printf("%d",v[m-1]); return 0;
	}
	m-=n+1;
	
	int size=s.size();
	
	if(*s.rbegin()<size){
		printf("%d",m+size); return 0;
	}
	
	int limit=*s.lower_bound(size);
	int maxsize=s.size()+limit-size;

	if(m<=limit-size){
		printf("%d",m+size);
	}else printf("%d",maxsize);
	return 0;	
}

