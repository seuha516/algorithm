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

int dap;
int st,ed;
string s;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,k; scanf("%d %d",&n,&k); getchar(); dap=1;
		cin >> s; getchar();
		for(int i=0;i<n;i++){
			if(s[i]=='*'){
				st=i; break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(s[i]=='*'){
				ed=i; break;
			}
		}
		int now=st;
		while(now<ed){
			for(int i=k;i>=1;i--){
				if(now+i>ed){
					continue;
				}else if(now+i==ed){
					dap++;
					now=ed;
					break;
				}
				if(s[now+i]=='*'){
					dap++;
					now=now+i;
					break;
				}
			}
		}
		printf("%d\n",dap);
	}
	
	return 0;
}
