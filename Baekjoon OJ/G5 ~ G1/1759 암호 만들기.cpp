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
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
queue <pair<int,int> > q;

void BFS(){
	int aa=q.front().first; int bb=q.front().second;
	q.pop();
	
	for(int i=0;i<4;i++){
		int aaa=aa+x[i]; int bbb=bb+y[i];
		if(aaa<0||aaa>a-1||bbb<0||bbb>b-1){
			continue;
		}
		if(visit[aaa][bbb]||arr[aaa][bbb]==0){
			continue;
		}
		q.push(pair<int,int>(aaa,bbb)); visit[aaa][bbb]=1;
	}
	
	if(q.empty()) return;
	BFS(); 
}

int l,c; char aaa[20];
vector <char> v;

void DP(){
	
	if(v.size()==l){
		int j=0,m=0;
		for(int i=0;i<v.size();i++){
			if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'){
				m++;
			}else{
				j++;
			}
		}
		if(j<2||m<1){
		v.pop_back(); 
		return;	}
		
		for(int i=0;i<v.size();i++){
			printf("%c",v[i]);
		}printf("\n");
		
		v.pop_back(); 
		return;	
	}
	
	for(int i=0;i<c;i++){
		if(v.size()==0){
			v.push_back(aaa[i]);
		}else{
			if(v.back()<aaa[i]){
				v.push_back(aaa[i]);
			}else{
				continue;
			}
		}
		DP();
	}
	
	if(v.size()==0) return;
	v.pop_back();
	return;
	
}

int main(){
	
	scanf("%d %d",&l,&c); 
	for(int i=0;i<c;i++){
		getchar(); scanf("%c",aaa+i);
	}
	sort(aaa,aaa+c);
	DP();
	
	return 0;
}


