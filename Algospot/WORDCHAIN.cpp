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

vector<string> v;
vector<char> dap;
bool used[200];
int arr[26][26];
int in[26];
int out[26];
bool not_circle;

void dfs(int now){
	for(int i=0;i<26;i++){
		if(arr[now][i]){
			arr[now][i]--; dfs(i);
		}
	}
	dap.push_back(now+'a');
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		v.clear(); dap.clear(); 
		memset(arr,0,sizeof(arr)); memset(in,0,sizeof(in)); memset(out,0,sizeof(out)); memset(used,0,sizeof(used));
		bool impossible=0; not_circle=0;
		
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			string s; cin >> s; v.push_back(s);
			int st=s[0]-'a', end=s[s.size()-1]-'a';
			arr[st][end]++; out[st]++; in[end]++;
		}
		
		int st=-1,end=-1; //시작점, 끝점
		for(int i=0;i<26;i++){
			if(in[i]-out[i]<-1||in[i]-out[i]>1){
				impossible=1; break;
			}else if(in[i]==out[i]+1){
				if(end==-1){
					end=i;
				}else{
					impossible=1; break;
				}
			}else if(in[i]+1==out[i]){
				if(st==-1){
					st=i;
				}else{
					impossible=1; break;
				}
			}
		}
		if(st==-1&&end==-1){
			st=v[0][0]-'a'; end=v[0][v[0].size()-1]-'a';
		}else if(st==-1||end==-1){
			impossible=1;
		}else{
			not_circle=1; arr[end][st]++;
		}
		if(impossible){
			printf("IMPOSSIBLE\n"); continue;
		}
		
		dfs(st);
		reverse(dap.begin(),dap.end());
		if(dap.size()!=n+1+(not_circle?1:0)){
			printf("IMPOSSIBLE\n"); continue;
		}
		
		if(not_circle){
			int temp=0;
			for(int i=0;i<dap.size()-1;i++){
				if(dap[i]==end+'a'&&dap[i+1]==st+'a'){
					temp=i; break;
				}
			}
			vector<int> ddap;
			for(int i=temp+1;i<dap.size();i++){
				ddap.push_back(dap[i]);
			}
			for(int i=1;i<temp+1;i++){
				ddap.push_back(dap[i]);
			}
			dap.clear();
			for(int i=0;i<ddap.size();i++) dap.push_back(ddap[i]);
		}
		
		for(int i=0;i<dap.size()-1;i++){
			for(int j=0;j<v.size();j++){
				if(used[j]) continue;
				if(v[j][0]==dap[i]&&v[j][v[j].size()-1]==dap[i+1]){
					printf("%s ",v[j].c_str()); used[j]=1; break;
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}


