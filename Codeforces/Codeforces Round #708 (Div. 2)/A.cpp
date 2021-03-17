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
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		vector<int> v;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		vector<int> temp;
		sort(v.begin(),v.end());
		bool used[1000]={0,};
		
		for(int i=0;i<v.size();i++){
			int X=v[i];
			if(used[X]){
				temp.push_back(X);
			}else{
				printf("%d ",X); used[X]=1;
			}
		}
		for(int i=0;i<temp.size();i++){
			printf("%d ",temp[i]);
		}
		printf("\n");
	}
	
	return 0;
}




