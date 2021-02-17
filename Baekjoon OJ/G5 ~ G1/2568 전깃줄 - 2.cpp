#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <set>
#include <queue>
#include <utility>

using namespace std;

vector<pair<int,int>> temp;
bool check[500005];

int x;
int lis=1;

int main(){
	
	int n; scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a,b; scanf("%d %d",&a,&b);
		temp.push_back({b,a});
		check[a]=1;
	}sort(temp.begin(),temp.end());
	
	vector<int> go;
	vector<pair<int,int>> trace;
	
	go.push_back(temp[0].second);
	trace.push_back({0,temp[0].second});
	
	for(int i=1;i<n;i++){
		int target=temp[i].second;
		if(target>go.back()){
			trace.push_back({lis++,target});
			go.push_back(target);
			x=i;
		}else{
			int idx=lower_bound(go.begin(),go.end(),target)-go.begin();
			trace.push_back({idx,target});
			go[idx]=target;
		}
	}
		
	int now=go.size()-1;
	for(int i=n-1;i>=0;i--){
		if(trace[i].first==now){
			check[trace[i].second]=0;
			now--;
		}
		if(now==-1) break;
	}
	
	printf("%d\n",n-go.size());
	for(int i=0;i<500005;i++){
		if(check[i]) printf("%d\n",i);
	}
	
	return 0;
}

