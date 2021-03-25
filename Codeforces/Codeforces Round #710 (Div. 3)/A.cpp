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


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		ll n,m,x; scanf("%lld %lld %lld",&n,&m,&x);
		ll a,b;
		a=(x-1)/n; b=(x-1)%n;
		printf("%lld\n",m*b+a+1);		
	}
	
	return 0;
}
