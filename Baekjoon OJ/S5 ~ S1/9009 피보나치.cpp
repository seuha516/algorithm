#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>

using namespace std;

vector <int> fib;
void fibset(){
	fib.push_back(0); fib.push_back(1);
	for(int i=2;i<46;i++){
		fib.push_back(fib[i-1]+fib[i-2]);
	}
}


int main(){
	
	fibset();
	int n;scanf("%d",&n);
	while(n--){
		
		vector<int> dap;
		
		int x; scanf("%d",&x);
		while(x){
			vector<int>::iterator aa=lower_bound(fib.begin(),fib.end(),x);
			
			int xx;
				
			if(fib[aa-fib.begin()]<=x){
				xx=fib[aa-fib.begin()];
			}else{
				xx=fib[aa-fib.begin()-1];
			}
			
			dap.push_back(xx);
			x-=xx;
		}
		
		for(int i=0;i<dap.size();i++){
			printf("%d ",dap[dap.size()-1-i]);
		}printf("\n");
		
	}
	
	return 0;
}




