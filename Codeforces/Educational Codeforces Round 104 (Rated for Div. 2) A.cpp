#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>
 
using namespace std;
 
int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int n; scanf("%d",&n);
		vector<int> v;
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x); 
		}sort(v.begin(),v.end());
		
		int cnt=0;
		for(int i=0;i<n;i++){
			if(v[0]==v[i]) cnt++;
		}
		printf("%d\n",v.size()-cnt);
		
	}
	
	return 0;
}
