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
	
	int TC; scanf("%d",&TC); getchar();
	while(TC--){
		
		string s; cin >> s; getchar();
		int len=s.length();
		
		bool dap=0;
		for(int i=0;i<=len;i++){
			vector<int> v;
			for(int j=0;j<i;j++){
				if(s[j]=='1') v.push_back(j);
			}
			for(int j=i;j<len;j++){
				if(s[j]=='0') v.push_back(j);
			}
			
			bool temp=1;
			for(int j=1;j<v.size();j++){
				if(v[j]-v[j-1]<=1){
					temp=0; break;
				}
			}
			
			if(temp){
				dap=1; break;
			}
		}
		if(dap){
			printf("YES\n");
		}else printf("NO\n");
		
	}
	
	return 0;
}











