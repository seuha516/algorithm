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
		vector<double> mine,miner;
		for(int i=0;i<2*n;i++){
			double x,y; scanf("%lf %lf",&x,&y);
			if(x==0.0) miner.push_back(y*y);
			else mine.push_back(x*x);
		}
		
		sort(mine.begin(),mine.end());
		sort(miner.begin(),miner.end());
		double temp=0.0;
		for(int i=0;i<n;i++){
			temp+=sqrt(miner[i]+mine[i]);
		}
		printf("%.20lf\n",temp);
	}
	
	return 0;
}

