#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

template <typename T>
T gcd(T a, T b){  
	return a%b==0? b : gcd(b,a%b);
}
ll jarihab(ll x){
	ll ret=0;
	while(x){
		ret+=x%10;
		x/=10;
	}
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		ll n; scanf("%lld",&n);
		for(ll i=n;1;i++){
			if(gcd(i,jarihab(i))>1){
				printf("%lld\n",i);
				break;
			}
		}
	}
	
	return 0;
}





















