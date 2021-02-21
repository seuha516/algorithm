#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
	
	for(int i=0;i<n;i++){
		int a,b; scanf("%d %d",&a,&b); pq.push(make_pair(a,b));
	}
	
	priority_queue<int,vector<int>,greater<int> > temp;
	temp.push(pq.top().second); pq.pop();
	for(int i=1;i<n;i++){
		int st=pq.top().first; int end=pq.top().second; pq.pop();
		if(st>=temp.top()){
			temp.push(end); temp.pop();
		}else{
			temp.push(end);
		}
	}
	printf("%d",temp.size());
	
	return 0;
}

