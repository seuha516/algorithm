#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
#include <map>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		ll p,a,b,c; scanf("%lld %lld %lld %lld",&p,&a,&b,&c);
		
		ll t1,t2,t3;
		t1=a-(p%a); t2=b-(p%b); t3=c-(p%c);
		if(t1==a) t1=0; if(t2==b) t2=0; if(t3==c) t3=0;
		printf("%lld\n",min(min(t1,t2),t3));
		
		
	}
	
	return 0;
}


