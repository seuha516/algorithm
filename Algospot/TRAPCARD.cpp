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

int x_4[4]={-1,1,0,0}; int y_4[4]={0,0,-1,1};

int capacity[800][800], flow[800][800];
int network_flow(int source,int sink){
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
		memset(capacity,0,sizeof(capacity)); memset(flow,0,sizeof(flow));
		int n,m; scanf("%d %d",&n,&m); getchar();
		int arr[30][30]={0,};
		for(int i=0;i<n;i++){
			string s; cin >> s; getchar();
			for(int j=0;j<m;j++){
				if(s[j]=='#') arr[i][j]=1;
			}
		}
		
		vector<int> A,B;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]) continue; 
				int now=i*m+j;
				if((i+j)&1){
					capacity[401][now]=1; A.push_back(now);
				}else{
					capacity[now][402]=1; B.push_back(now);
				} 
				for(int k=0;k<4;k++){
					int x=i+x_4[k], y=j+y_4[k];
					if(x<0||x>n-1||y<0||y>m-1||arr[x][y]) continue;
					if((i+j)&1){
						capacity[now][x*m+y]=1;
					}else{
						capacity[x*m+y][now]=1;
					} 
				}
			}
		}
		network_flow(401,402);

		vector<int> Amatch(A.size(),-1),Bmatch(B.size(),-1);
		vector<bool> Achoose(A.size(),1),Bchoose(B.size(),0);
		for(int i=0;i<A.size();i++){
			for(int j=0;j<B.size();j++){
				if(flow[A[i]][B[j]]==1){
					Amatch[i]=j; Bmatch[j]=i; break;
				}
			}
		}
		for(int i=0;i<B.size();i++){
			if(Bmatch[i]==-1) Bchoose[i]=1;
		}
		while(1){
			bool change=0;
			for(int i=0;i<A.size();i++){
				for(int j=0;j<B.size();j++){
					if(Achoose[i]&&Bchoose[j]&&(capacity[A[i]][B[j]]==1)){
						Achoose[i]=0;
						Bchoose[Amatch[i]]=1;
						change=1;
					}
				}
			}
			if(!change) break;
		}
		
		int dapnum=0;
		for(int i=0;i<A.size();i++){
			int x=A[i]/m, y=A[i]%m;
			if(Achoose[i]){
				arr[x][y]=-1; dapnum++;
			}
		}
		for(int i=0;i<B.size();i++){
			int x=B[i]/m, y=B[i]%m;
			if(Bchoose[i]){
				arr[x][y]=-1; dapnum++;
			}
		}
		printf("%d\n",dapnum);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==1) printf("#");
				else if(arr[i][j]==-1) printf("^");
				else printf(".");
			}
			printf("\n");
		}
	}
	
	return 0;
}

