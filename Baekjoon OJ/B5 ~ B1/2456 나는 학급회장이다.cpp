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

long long a,b,c,aa,bb,cc;

int main(){
	
	long long n;scanf("%lld",&n);
	
	while(n--){
		long long x,y,z;scanf("%lld %lld %lld",&x,&y,&z);
		a+=x; b+=y; c+=z;
		if(x==3) x*=1000000;
		else if(x==2) x*=1000;
		if(y==3) y*=1000000;
		else if(y==2) y*=1000;
		if(z==3) z*=1000000;
		else if(z==2) z*=1000;
		aa+=x; bb+=y; cc+=z;
	}
	
	vector <pair<long long,long long> > v;
	v.push_back(pair<long long,long long>(a,1));
	v.push_back(pair<long long,long long>(b,2));
	v.push_back(pair<long long,long long>(c,3));
	sort(v.begin(),v.end());
	
	int arr[4];
	arr[1]=aa;arr[2]=bb;arr[3]=cc;
	
		
	if(v[2].first!=v[1].first){
		printf("%lld",v[2].second);
	}else if(v[0].first==v[1].first&&v[0].first==v[2].first){
		
		if(aa>bb&&aa>cc){
			printf("1");
		}else if(bb>cc&&bb>aa){
			printf("2");
		}else if(cc>bb&&cc>aa){
			printf("3");
		}else{
			printf("0");
		}
		
		
	}else if(v[2].first==v[1].first){
		if(arr[v[2].second]==arr[v[1].second]){
			printf("0");
		}else if(arr[v[2].second]>arr[v[1].second]){
			printf("%lld",v[2].second);
		}else{
			printf("%lld",v[1].second);
		}	
	}else{
		printf("%lld",v[2].second);		
		
	}
	
	printf(" %lld",max(a,max(b,c)));
	
	return 0;
}


