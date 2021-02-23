#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>

using namespace std;

int k;
vector<string> v_temp; vector<string> v;
int overlap[20][20];

int cache[20][40000];

int go(int pastnum,bool used[20]){
	
	int idx=0; int picked=0;
	for(int i=0;i<k;i++){
		idx*=2; idx+=used[i]; picked+=used[i];
	}
	
	int &ret=cache[pastnum][idx]; if(ret!=-1) return ret;
	
	if(picked==k) return ret=0;
	
	ret=0;
		
	for(int i=0;i<k;i++){
		if(used[i])continue;
		used[i]=1;
		ret=max(ret,overlap[pastnum][i]+go(i,used));
		used[i]=0;
	}
	
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC); 
	while(TC--){
		
		//초기화 
			while(!v.empty())v.pop_back();
			while(!v_temp.empty())v_temp.pop_back();
			for(int i=0;i<20;i++){for(int j=0;j<20;j++){overlap[i][j]=0;}}
			for(int i=0;i<20;i++){for(int j=0;j<40000;j++){cache[i][j]=-1;}}
		
		//전처리 
		scanf("%d",&k);
		for(int i=0;i<k;i++){
			string s; cin >> s;
			if(find(v_temp.begin(),v_temp.end(),s)==v_temp.end()) v_temp.push_back(s);
		}
		k=v_temp.size();
		
		bool erase[20]={0,};
		for(int i=0;i<k;i++){
			for(int j=0;j<k;j++){
				if(i==j)continue;
				if(v_temp[i].find(v_temp[j])!=string::npos) erase[j]=1;
			}
		}
		for(int i=0;i<k;i++){
			if(!erase[i]) v.push_back(v_temp[i]);
		}
		k=v.size();
		
		for(int i=0;i<k;i++){
			for(int j=0;j<k;j++){
				if(i==j)continue;
				
				int minlen=min(v[i].length(),v[j].length());
				int gap=0;
				
				for(int k=1;k<=minlen;k++){
					bool ok=1;
					for(int t=0;t<k;t++){	
						if(v[i][v[i].length()-k+t] != v[j][t]){
							ok=0; break;
						}
					}
					if(ok){
						gap=k;
					}
				}
				overlap[i][j]=gap;
			}
		}	
		
		bool used_basic[20]={0,};
		int big=go(18,used_basic);
		
		bool check[20]={0,};
		int st=18; int temp=0;
		vector<int> dap;
		
		while(1){
			
			for(int i=0;i<k;i++){
				
				if(check[i])continue;
				check[i]=1;
				int result=go(i,check);
				if(result+overlap[st][i]==big){
					big-=overlap[st][i];
					st=i;
					dap.push_back(i);
					break;
				}		
				check[i]=0;
			}
			
			int pkd=0;
			for(int i=0;i<k;i++){
				pkd+=check[i];
			}
			if(pkd==k) break;
		}

		string ans=v[dap[0]];
		for(int i=1;i<dap.size();i++){
			ans+=v[dap[i]].substr(overlap[dap[i-1]][dap[i]]);
		}
		cout << ans << endl;
	}
	
	return 0;	
}
