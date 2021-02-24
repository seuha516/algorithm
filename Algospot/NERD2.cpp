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

bool isdominated(map<int,int> &m,int x,int y){
	map<int,int>::iterator it=m.lower_bound(x);
	if(it==m.end()) return false;
	return y < it->second;
}
void removedominated(map<int,int> &m,int x,int y){
	map<int,int>::iterator it=m.lower_bound(x);
	if(it==m.begin()) return;
	it--;
	while(it->second<y){
		if(it==m.begin()){
			m.erase(it); return;
		}else{
			map<int,int>::iterator jt=it; jt--;
			m.erase(it);
			it=jt;	
		}
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int hap=0;
		int n; scanf("%d",&n);
		map<int,int> m;
		for(int i=0;i<n;i++){
			int x,y; scanf("%d %d",&x,&y);
			if(!isdominated(m,x,y)){
				removedominated(m,x,y);
				m[x]=y;
			}
			hap+=m.size();
		}		
		printf("%d\n",hap);
	}
	
	return 0;
}


