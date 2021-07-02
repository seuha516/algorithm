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


int main(){
	
	int arr[105]={0,};
	int dis[105]={0,};
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n+m;i++){
		int x,y; scanf("%d %d",&x,&y); arr[x]=y;
	}
	queue<int> q; q.push(1);
	
	while(1){
		int t=q.front(); q.pop();
		for(int i=1;i<=6;i++){
			int nt=t+i; if(arr[nt]) nt=arr[nt];
			if(dis[nt]) continue;
			dis[nt]=dis[t]+1;
			q.push(nt);
			if(nt==100){
				printf("%d",dis[nt]); return 0;
			}
		}
	}
	
	return 0;
}








