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

int n,m,k;
int dap=987654321;
vector<int> R,C,S;

void go(int used,vector<vector<int>> now){
	if(used==((1<<k)-1)){
		for(int i=0;i<n;i++){
			int result=0;
			for(int j=0;j<m;j++){
				result+=now[i][j];
			}
			dap=min(dap,result);
		}
		return;
	}
	vector<vector<int>> init=now;
	for(int i=0;i<k;i++){
		if(used&(1<<i)) continue;
		now=init;
		int r=R[i], c=C[i], s=S[i];
		for(int j=1;j<=s;j++){
			int temp=now[r-j][c-j];
			for(int k=0;k<j*2;k++){
				now[r-j+k][c-j]=now[r-j+k+1][c-j];
			}
			for(int k=0;k<j*2;k++){
				now[r+j][c-j+k]=now[r+j][c-j+k+1];
			}
			for(int k=0;k<j*2;k++){
				now[r+j-k][c+j]=now[r+j-k-1][c+j];
			}
			for(int k=0;k<j*2-1;k++){
				now[r-j][c+j-k]=now[r-j][c+j-k-1];
			}
			now[r-j][c-j+1]=temp;
		}
		go(used|(1<<i),now);
	}
}

int main(){
	
	scanf("%d %d %d",&n,&m,&k);
	vector<vector<int>> init(n);
	for(int i=0;i<n;i++){
		init[i]=vector<int>(m);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&init[i][j]);
		}
	}
	for(int i=0;i<k;i++){
		int r,c,s; scanf("%d %d %d",&r,&c,&s); r--; c--;
		R.push_back(r); C.push_back(c); S.push_back(s);
	}
	go(0,init);
	printf("%d",dap);
	
	return 0;
}

