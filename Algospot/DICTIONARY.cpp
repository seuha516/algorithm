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

bool arr[26][26];
bool used[26];
bool used2[26];
vector<string> v;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		memset(arr,0,sizeof(arr)); memset(used,0,sizeof(used)); memset(used2,0,sizeof(used2));
		v.clear();
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			string s; cin >> s; v.push_back(s);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int size=min(v[i].size(),v[j].size());
				for(int k=0;k<size;k++){
					if(v[i][k]==v[j][k]){
						continue;
					}else{
						used[v[i][k]-'a']=used[v[j][k]-'a']=1;
						used2[v[i][k]-'a']=used2[v[j][k]-'a']=1;
						arr[v[i][k]-'a'][v[j][k]-'a']=1;
						break;
					}
				}
			}
		}
		queue<int> q;
		int usednode=0; for(int i=0;i<26;i++){if(used[i]) usednode++;}
		int printed=0;
		
		while(printed<usednode){
			for(int i=0;i<26;i++){
				if(!used[i]) continue;
				int ok=1;
				for(int j=0;j<26;j++){
					if(!used[j]) continue;
					if(arr[j][i]){
						ok=0; break;
					}
				}
				if(ok){
					q.push(i);
				}
			}
			if(q.empty()&&printed<usednode){
				printf("INVALID HYPOTHESIS"); break;
			}
			printf("%c",q.front()+'a');
			for(int i=0;i<26;i++){
				arr[q.front()][i]=0; 
			}
			printed++;
			used[q.front()]=0;
			q.pop();
		}
		if(printed==usednode){
			for(int i=0;i<26;i++){
				if(!used2[i]) printf("%c",i+'a');
			}
		}
		printf("\n");
	}
	
	return 0;
}


