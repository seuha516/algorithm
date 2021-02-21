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

char moon[4]={'D','S','L','R'};

int dslr(int a, int mode){
	
	int t1=a/1000;
	int t2=(a%1000)/100;
	int t3=(a%100)/10;
	int t4=a%10;
	
	if(mode==0){
		return (2*a)%10000;
	}else if(mode==1){
		if(a==0){
			return 9999;
		}else{
			return a-1;
		}
	}else if(mode==2){
		return 1000*t2+100*t3+10*t4+t1;
	}else if(mode==3){
		return 1000*t4+100*t1+10*t2+t3;
	}
	
}


queue <int> q;
bool visit[10003];
int link[10003];
int did[10003];
vector <char> v;

void pr(int a){
	if(link[a]!=-1){
		v.push_back(moon[did[a]]);
		pr(link[a]);
	}
}

int main(){	
	
	int n; scanf("%d",&n);
	while(n--){
	 	
	 	while(!q.empty()){
			q.pop();
		}
		while(!v.empty()){
			v.pop_back();
		}
	 	
	 	for(int i=0;i<10003;i++){
			visit[i]=false;
			link[i]=0;
			did[i]=0;
		}
	 	
		int a,b; scanf("%d %d",&a,&b);
		
		q.push(a); visit[a]=true;
		link[a]=-1;
		 
		while(1){
			
			int aa;
			aa=q.front(); q.pop(); 
			
			if(aa==b){
				pr(aa);
				for(int i=v.size()-1;i>=0;i--){
					printf("%c",v[i]);
				}
				printf("\n");	break;
			}
			
			for(int i=0;i<4;i++){
				int newaa=dslr(aa,i);
				if(!visit[newaa]){
					q.push(newaa); visit[newaa]=true;  
					link[newaa]=aa; did[newaa]=i;
				}
			}
		}		
	}
	return 0;
}


