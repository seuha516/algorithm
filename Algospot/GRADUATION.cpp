#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int N,K,M,L;
int dap;
vector<int> pre;
vector<int> season;

void go(int now,int studied,int rest){
	
	if(__builtin_popcount(studied)>=K){
		dap=min(dap,now-rest); return;
	}else if(now>=M) return;
	
	int can=0;
	for(int i=0;i<N;i++){
		if( (season[now]&(1<<i)) && ((studied&(1<<i))==0) && ((studied&pre[i])==pre[i]) ){
			can|=(1<<i);
		}
	}
	
	go(now+1,studied,rest+1);
	for(int subset=can;subset;subset=(subset-1)&can){
		if(__builtin_popcount(subset)<=L){
			go(now+1,studied|subset,rest);
		}
	}
	
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		pre.clear(); season.clear(); dap=9999;
		
		scanf("%d %d %d %d",&N,&K,&M,&L);
		for(int i=0;i<N;i++){
			int rr; scanf("%d",&rr);
			int temp1=0;
			for(int j=0;j<rr;j++){
				int r; scanf("%d",&r);
				temp1|=(1<<r);
			}
			pre.push_back(temp1);
		}
		for(int i=0;i<M;i++){
			int cc; scanf("%d",&cc);
			int temp2=0;
			for(int j=0;j<cc;j++){
				int c; scanf("%d",&c);
				temp2|=(1<<c);
			}
			season.push_back(temp2);
		}
		
		go(0,0,0);
		if(dap>M) printf("IMPOSSIBLE");
		else printf("%d",dap);
		if(TC!=0)printf("\n");
				
	}
		
	return 0;
}

