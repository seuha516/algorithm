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
		int n,k; scanf("%d %d",&n,&k); getchar();
		string s; cin >> s;
		if(k*2+1>s.length()){
			printf("NO\n"); continue;
		}
		bool ok=1;
		for(int i=0;i<k;i++){
			if(s[i]!=s[s.length()-1-i]) ok=0;
		}
		if(ok){
			printf("YES\n"); continue;
		}else{
			printf("NO\n"); continue;
		}
	}
	
	
	return 0;
}

