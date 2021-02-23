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

using namespace std;

int caniuse(int a, int mode){
	if(mode==1){
		if(a%3==0){
			return 1;
		}
	}else if(mode==2){
		if(a%2==0){
			return 1;
		}
	}else{
		return 1;
	}
	return 0;
}

int move(int a, int mode){
	if(mode==1){
		return a/3;
	}else if(mode==2){
		return a/2;
	}else{
		return a-1;
	}
}

bool visit[1000002];
queue <int> q;
int road[1000002];

	
int main(){	
	road[1]=-1;
	int x; scanf("%d",&x);
	
	
	q.push(x); visit[x]=true;
	
	while(1){
		int a=q.front(); q.pop();
		if(a==1){
			break;
		}
		for(int i=0;i<3;i++){
			if(caniuse(a,i)){
				if(visit[move(a,i)]){
					continue;
				}else{
				//	printf("%d ok\n",move(a,i));
					q.push(move(a,i));
					visit[move(a,i)]=true;
					road[move(a,i)]=a;
				}				
			}else{
				continue;
			}
		}				
	}
	
	vector <int> v;
	
	int t=0;
	int temp=1;v.push_back(1);
	while(1){
		if(temp==x){
			break;
		}else{
			temp=road[temp];
			v.push_back(temp);
		}
		
		t++;
	}
	printf("%d\n",t);
	for(int i=0;i<v.size();i++){
		printf("%d ",v[v.size()-i-1]);
	}
		
	return 0;
}



