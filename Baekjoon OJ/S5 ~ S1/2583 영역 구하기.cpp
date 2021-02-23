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
#include <functional>

using namespace std;

int a,b;
int arr[101][101];
bool visit[101][101];
queue <pair<int,int> > q;

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};


int sjfqdl=0;
void BFS(){
	sjfqdl++;
	int aa=q.front().first; int bb=q.front().second;
	q.pop();
	
	for(int i=0;i<4;i++){
		int aaa=aa+x[i]; int bbb=bb+y[i];
		if(aaa<0||aaa>a-1||bbb<0||bbb>b-1){
			continue;
		}
		if(visit[aaa][bbb]||arr[aaa][bbb]==1){
			continue;
		}
		q.push(pair<int,int>(aaa,bbb)); visit[aaa][bbb]=1;
	}
	
	if(q.empty()) return;
	BFS(); 
}


int main(){
	
	int k; scanf("%d %d %d",&a,&b,&k);

	for(int j=0;j<k;j++){
		int t1,t2,t3,t4; scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
		for(int q=t1;q<t3;q++){
			for(int p=t2;p<t4;p++){
				arr[a-p-1][q]=1;
			}
		}
	}
	
	int gaesoo=0; vector <int> sjfq;
	
	while(1){
		int pass=0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(arr[i][j]==0&&!visit[i][j]){
					q.push(pair<int,int>(i,j)); visit[i][j]=1; gaesoo++;
					pass=1; break;
				}
			}if(pass) break;
		}
		if(pass==0)break;
		
		
		
		BFS();	
		sjfq.push_back(sjfqdl); sjfqdl=0;
	}
	
	sort(sjfq.begin(),sjfq.end());
	printf("%d\n",gaesoo);
	for(int i=0;i<sjfq.size();i++){
		printf("%d ",sjfq[i]);
	}
	
	return 0;
}


