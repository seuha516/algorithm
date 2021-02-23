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

#define TEST 1
#define intmax 2147483647
#define LIMIT 52000

using namespace std;

vector<int> sosu_list;
int sosu_gaesoo;
void sosu_making(){
	bool ok[LIMIT]={0,};
	for(int i=2;i<=LIMIT;i++){
		if(ok[i])continue;
		sosu_list.push_back(i);
		for(int j=i;j<=LIMIT;j+=i){
			ok[j]=1;
		}
	}
	sosu_gaesoo=sosu_list.size();
}

int main(){
	
	vector<long long> v;
	
	long long x=1;
	for(int i=0;i<40;i++){
		v.push_back(x);
		x*=3;
	}
	
	long long n; scanf("%lld",&n); 
	if(n==0){
		printf("NO"); return 0;
	}
	
	for(int i=39;i>=0;i--){
		if(n>=v[i])n-=v[i];
	}
	
	if(n==0)printf("YES");
	else printf("NO");
		
	
	return 0;	
}




