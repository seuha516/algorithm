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

int capacity[500][500], flow[500][500];
int network_flow(int source,int sink){
	memset(flow,0,sizeof(flow));
	int ret=0;
	while(1){
		vector<int> p(500,-1);
		queue<int> q;
		p[source]=source;
		q.push(source);
		while(!q.empty()&&p[sink]==-1){
			int now=q.front(); q.pop();
			for(int i=0;i<500;i++){
				if(capacity[now][i]-flow[now][i]>0 && p[i]==-1){
					q.push(i); p[i]=now;
				}
			}
		}
		if(p[sink]==-1) break;
		int input=987654321;
		for(int i=sink;i!=source;i=p[i]){
			input=min(input,capacity[p[i]][i]-flow[p[i]][i]);
		}
		for(int i=sink;i!=source;i=p[i]){
			flow[p[i]][i]+=input; flow[i][p[i]]-=input;
		}
		ret+=input;
	}
	return ret;
} 

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		memset(capacity,0,sizeof(capacity));

		int n; scanf("%d",&n); getchar();
		bool arr[8][8]={0,};
		int id[2][8][8]; memset(id,-1,sizeof(id)); int cnt=5;
		for(int i=0;i<n;i++){
			string s; cin >> s; getchar();
			for(int j=0;j<n;j++){
				if(s[j]=='*') arr[i][j]=1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]) continue;
				if(id[0][i][j]==-1){
					int x=i,y=j;
					while(x>=0&&x<n&&y>=0&&y<n&&arr[x][y]!=1){
						id[0][x][y]=cnt;
						x++; y--;
					}
					cnt++;
				}
				if(id[1][i][j]==-1){
					int x=i,y=j;
					while(x>=0&&x<n&&y>=0&&y<n&&arr[x][y]!=1){
						id[1][x][y]=cnt;
						x++; y++;
					}
					cnt++;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int t1=id[0][i][j], t2=id[1][i][j];
				if(t1==-1||t2==-1) continue;
				capacity[0][t1]=1;
				capacity[t2][1]=1;
			 	capacity[t1][t2]=1;
			}
		}
		printf("%d\n",network_flow(0,1));
	}
	
	return 0;
}
