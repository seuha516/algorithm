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
		
		vector<int> list;
		
		string s; int n,m;
		cin >> s; scanf("%d %d",&n,&m); getchar();
		
		bool visited[30000]={0,};
		
		if(s=="0"){printf("IMPOSSIBLE\n"); continue;}
		
		for(int i=0;i<s.length();i++){
			list.push_back(s[i]-'0');
		}
		sort(list.begin(),list.end());
		sort(s.begin(),s.end());
		
		int slen=s.length();
		bool ok=0,finish=0;
		
		queue<int> q; q.push(0);
		queue<string> str; str.push("");
		while(!q.empty()){
			int now=q.front(); q.pop(); string S=str.front(); str.pop();
			if(S=="0") continue;
			if((ok==0) && (now>=n+m)){
				 ok=1;
				 int tmp=q.size();
				 for(int i=0;i<tmp;i++){
				 	int x=q.front(); x%=n; q.pop(); q.push(x);
				 }
				 now%=n;
			}
			if(ok){
				visited[now]=1; 
				if(now==m){
					printf("%s\n",S.c_str()); finish=1; break;
				}
			}
			for(int i=0;i<slen;i++){
				int next=now*10+list[i];
				if(!ok){
					q.push(next);
					str.push(S+s[i]);
				}else{
					next%=n;
					if(!visited[next]){
						q.push(next);
						str.push(S+s[i]);
					}
				}
			}
		}
		
		if(!finish) printf("IMPOSSIBLE\n");
	}
	
	return 0;
}
