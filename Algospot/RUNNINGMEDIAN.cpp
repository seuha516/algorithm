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
int arr[5]={3,1,5,4,2};
int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; ll a,b; scanf("%d %lld %lld",&n,&a,&b);
		ll input=1983;
		ll hap=0;
		multiset<ll> ms;
		multiset<ll>::iterator it;
		ll past=-999;
		for(int i=0;i<n;i++){
			ms.insert(input);
			if(!i) it=ms.begin();
			else if(!(i&1)) ++it;
			if(*it>input) --it; 
			past=input;
			hap+=*it; hap%=20090711;
			input=input*a+b; input%=20090711;
		}
		printf("%lld\n",hap);
	}
	
	return 0;
}


