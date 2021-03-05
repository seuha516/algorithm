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

int m[17000000];

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		int status_st=0;
		for(int i=0;i<4;i++){
			int num; scanf("%d",&num);
			for(int j=0;j<num;j++){
				int x; scanf("%d",&x);
				x--;
				status_st|=i<<(x*2);
			}
		}
		int status_end=(1<<n*2)-1;
		
		if(status_st==status_end){printf("0\n"); continue;}
		
		queue<int> q; q.push(status_st); q.push(status_end);
		 memset(m,0,sizeof(m)); 
		m[status_st]=1; m[status_end]=-1;
		
		while(!q.empty()){
			int now=q.front(); q.pop();
			int level=m[now];
			int t[4]={99,99,99,99}; int cnt=0;
			for(int i=0;i<n;i++){
				int tmp=(now>>(i*2))&3;
				if(t[tmp]==99){t[tmp]=i; cnt++;}
				if(cnt==4) break;
			}
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					int next;
					if(t[i]<t[j]) next=(now&(~(3<<(t[i]*2)))) | (j<<(t[i]*2));
					else continue;
					if(m[next]==0){
						q.push(next); m[next]=(level>0? level+1:level-1);
					}else{
						if((level>0) != (m[next]>0)){
							printf("%d\n",abs(m[now]-m[next])-1);
							goto end;
						}
					}
				}
			}
		}
		end:;
	}
	
	return 0;
}
