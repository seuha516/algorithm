#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int n; scanf("%d",&n);
	
		vector<int> v; 
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		if(n<=1){
			printf("%d\n",n); continue;
		}
		vector<int> l;
		l.push_back(1);
		
		for(int i=1;i<n;i++){
			int len=1;
			for(int j=0;j<i;j++){
				if(v[j] < v[i]){
					len=max(len,l[j]+1);
				}
			}
			l.push_back(len);		
		}
		int dap=0;
		for(int i=0;i<n;i++){
			dap=max(dap,l[i]);
			
		}
		printf("%d\n",dap);
	}	
   
    return 0;
}
