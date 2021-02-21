#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>

using namespace std;

int arr[52][52];
bool knowman[52];
vector <int> ban;

vector <vector <int> > party;

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	
	int know; scanf("%d",&know);
	for(int i=0;i<know;i++){
		int t; scanf("%d",&t);
		ban.push_back(t);
	}
	for(int i=0;i<m;i++){
		vector <int> v;
		int people; scanf("%d",&people);
		for(int j=0;j<people;j++){
			int t; scanf("%d",&t);
			v.push_back(t);
		}
		party.push_back(v);
	}

	for(int i=0;i<party.size();i++){
		for(int j=0;j<party[i].size();j++){
			for(int k=j+1;k<party[i].size();k++){
				arr[party[i][j]][party[i][k]]=1;
				arr[party[i][k]][party[i][j]]=1;
			}
		}
	}
	
	while(ban.size()){
		
		queue <int> q;
		q.push(ban.back()); knowman[ban.back()]=1;
		ban.pop_back();
	
		while(1){
			
			int a=q.front(); q.pop();
			
			for(int i=1;i<=n;i++){
				if(arr[a][i]&&!knowman[i]){
					q.push(i); knowman[i]=1;
				}
			}
			if(q.empty()){
				break;
			}
						
		}
		
		
	}
	int dap=0;
	
	for(int i=0;i<party.size();i++){
		int t=1;
		for(int j=0;j<party[i].size();j++){
			if(knowman[party[i][j]]){
				t=0;break;
			}
		}
		if(t) dap++;
	}
	
	printf("%d",dap);

	return 0;
}

