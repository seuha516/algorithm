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

int arr[22][22];
int dis[22][22];
bool visit[22][22];
int n; 


int x[4]={-1,0,0,1};
int y[4]={0,-1,1,0};

int main(){	
	
	int s1,s2;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==9){
				s1=i; s2=j;
			}
		}
	}
	
	queue <int> q1;
	queue <int> q2;
	vector <pair<int, int> > v;
	
	
	int sang=2;
	int nyam=0;
	
	int dap=0;
	
	while(1){
		
		int end=0;
		 
		for(int i=0;i<22;i++){       //ÃÊ±âÈ­
			for(int j=0;j<22;j++){
				dis[i][j]=0;
				visit[i][j]=0;
			}
		}
		while(!q1.empty()){
			q1.pop();q2.pop();
		}
		v.clear();
		int level=0;
		int exp[401]={0,}; exp[0]=2;
		int findfish=1<<20;
		
		
		q1.push(s1); q2.push(s2); visit[s1][s2]=1;
		
		arr[s1][s2]=0;
				
		while(1){
			
			exp[level]--;
			if(exp[level]==0){
				level++;
			}
			
			if(level>findfish){
				break;
			}
		
			int a=q1.front(); int b=q2.front();
			q1.pop(); q2.pop();			
			
			if(arr[a][b]>0&&arr[a][b]<sang){
				v.push_back(pair<int, int>(a,b));
				findfish=level;
				continue;
			}			
			
			for(int i=0;i<4;i++){
				
				int aa=a+x[i]; int bb=b+y[i];
				if(aa<0||bb<0||aa>n-1||bb>n-1){
					continue;
				}
				if(visit[aa][bb]||arr[aa][bb]>sang){
					continue;
				}
				exp[level+1]++;
				q1.push(aa); q2.push(bb); visit[aa][bb]=1;	
				dis[aa][bb]=dis[a][b]+1;	
			}
			if(q1.empty()&&findfish>(1<<19)){
				end=1;	break;			
			}
		}
		if(!end){
			sort(v.begin(),v.end());
			int a=v[0].first; int b=v[0].second;			
			nyam+=1;
			s1=a; s2=b;
			arr[a][b]=9; 			
		}	

		if(end){
			break;
		}
	  	dap+=dis[s1][s2];
	  	if(nyam>=sang){
	  		nyam-=sang;
	  		sang++;
		}	
	}
	
	printf("%d",dap);
	
	return 0;
}

