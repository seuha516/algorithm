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
		ll dap=0;
		string s; getline(cin,s);
		int len=s.length();
		
		vector<int> v,vv;
		
		int now=0;
		int temp=0;
		int last=-1;
		
		while(1){
			if(now==len){
				v.push_back(temp);
				break;	
			}
			if(last==-1){
				if(s[now]=='?'){
					temp++;
				}else{
					last=s[now]-'0';
					temp++;
				}
			}else{
				if(s[now]=='?'){
					last=1-last;
					temp++;
				}else{
					if(1-last==s[now]-'0'){
						last=1-last;
						temp++;
					}else{
						v.push_back(temp);
						
						int T=0;
						while(s[now-1]=='?'){
							now=now-1;
							T++;
						}
						if(T) vv.push_back(T);
						
						last=-1;
						temp=0;
						continue;
					}
				}
			}
			now++;
		}
		
		for(int i=0;i<v.size();i++){
			ll x=(ll)v[i];
			dap+=x*(x+1)/(ll)2;
		}
		for(int i=0;i<vv.size();i++){
			ll x=(ll)vv[i];
			dap-=x*(x+1)/(ll)2;
		}
				
		printf("%lld\n",dap);
	}
	
	return 0;
}













