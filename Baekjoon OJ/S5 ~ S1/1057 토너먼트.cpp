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
		
	int n,a,b; scanf("%d %d %d",&n,&a,&b);
	a--;b--;
	
	vector<int>vv;
	for(int i=0;i<n;i++){
		vv.push_back(i);
	}
	
	vector<int>v;
	int dap=1;

	while(1){
		
		v=vv; 
		
		while(!vv.empty()) vv.pop_back();
		
		int i=0;
		for(i=0;i<v.size()-1;i++){
			if(v[i]==a && v[i+1]==b){
				printf("%d",dap);return 0;
			}else if(v[i]==b && v[i+1]==a){
				printf("%d",dap);return 0;
			}else if(v[i+1]==a){
				vv.push_back(v[i+1]); i++;
			}else if(v[i+1]==b){
				vv.push_back(v[i+1]); i++;
			}else{
				vv.push_back(v[i]); i++;
			}
			
		}
		if(i==v.size()-1){
			vv.push_back(v[i]);
		}
		dap++;
	}
	
	
    return 0;
}
