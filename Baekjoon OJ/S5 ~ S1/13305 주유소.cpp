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

vector<long long> dis;
vector<pair<long long,int> > pay;
long long dap=0;

int main(){
	
	int n; scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		long long x; scanf("%lld",&x); dis.push_back(x);
	}
	for(int i=0;i<n;i++){
		long long x; scanf("%lld",&x); 
		if(i!=n-1)pay.push_back(make_pair(x,i));
	}
	sort(pay.begin(),pay.end());
	
	
	int endnum=n-1;
	for(int i=0;i<n-1;i++){
		if(endnum < pay[i].second) continue;
		long long d=0;
		for(int j=pay[i].second;j<endnum;j++){
			d+=dis[j];
		}
		dap+=(pay[i].first)*d;
		endnum=pay[i].second;
		if(endnum==0) break;
		
	}
	
	printf("%lld",dap);

	return 0;

}



