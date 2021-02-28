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

vector<int> v;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		ll a,b; scanf("%lld %lld",&a,&b);
		bool ok=0;
		if(a>b){printf("NO\n"); continue;}
		if(a==b){printf("YES\n"); continue;}
		
		while(1){
			if(((b-a)&a)==(b-a)){ok=1; break;}
			bool ch=0;
			ll temp=1<<30;
			while(temp){
				if((temp&a)==temp && a+temp<=b){
					a+=temp; ch=1; break;
				}
				temp>>=1;
			}
			if(ch==0) break;
		}
		
		
		if(ok){
			printf("YES\n");			
		}else{
			printf("NO\n");		
		}
	}
	
	return 0;
}


