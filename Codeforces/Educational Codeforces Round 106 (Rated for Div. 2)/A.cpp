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
		
		int n,k1,k2,a,b; scanf("%d %d %d %d %d",&n,&k1,&k2,&a,&b);
		int W=k1+k2;
		int B=2*n-W;
		if(a*2<=W && b*2<=B){
			printf("YES\n");
		}else printf("NO\n");
		
	}
	
	return 0;
}











