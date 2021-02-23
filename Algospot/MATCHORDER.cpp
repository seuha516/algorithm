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
		vector<int> russia,korea;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); russia.push_back(x);
		}
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); korea.push_back(x);
		}
		
		multiset<int> m(korea.begin(),korea.end());
		
		int dap=0;
		
		for(int i=0;i<n;i++){
			if(russia[i] > *(m.rbegin())){
				m.erase(m.begin());
			}else{
				dap++;
				m.erase(m.lower_bound(russia[i]));
			}
		}
		printf("%d\n",dap);		
	}
		
	return 0;	
}
