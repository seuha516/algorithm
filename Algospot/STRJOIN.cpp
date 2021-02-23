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

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		vector<int> v;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
			
		}sort(v.begin(),v.end());
		
		int dap=0;
		while(v.size()>1){
			dap+=v[0]+v[1];
			v.push_back(v[0]+v[1]);
			v.erase(v.begin(),v.begin()+2);	
			sort(v.begin(),v.end());		
		}
		printf("%d\n",dap);
	}
	
	return 0;	
}
