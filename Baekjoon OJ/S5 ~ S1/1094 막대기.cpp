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

int main(){
	
	int n; scanf("%d",&n);
	
	vector<int> v; v.push_back(64); int dap=0;
	while(1){
		int ap=0; for(int i=0;i<v.size();i++)ap+=v[i];
		if(ap==n) break;
		
		sort(v.begin(),v.end());
		int hap=0; for(int i=0;i<v.size();i++)hap+=v[i];
		
		if(hap-(v[0]/2)>=n){
			v[0]=v[0]/2;
		}else{
			v[0]=v[0]/2; v.push_back(v[0]);
		}
		sort(v.begin(),v.end());
		int hhap=0; for(int i=0;i<v.size();i++)hhap+=v[i];
			
	}
	
	printf("%d",v.size());
	
	return 0;
}



