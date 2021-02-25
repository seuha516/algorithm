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
	
	int h,m,s; scanf("%d %d %d",&h,&m,&s);
	int q; scanf("%d",&q);
	while(q--){
		int x; scanf("%d",&x);
		if(x==3){
			printf("%d %d %d\n",h,m,s);
		}else{
			int y; scanf("%d",&y); y%=86400;
			if(x==1){
				s+=y;
			}else{
				s+=(86400-y);
			}
			m+=s/60; s%=60; h+=m/60; m%=60; h%=24;
		}
	}
	
	
	return 0;
}


