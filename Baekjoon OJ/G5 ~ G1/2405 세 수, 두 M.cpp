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

using namespace std;

int main(){
	vector<int>v;
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);v.push_back(x); 
	}sort(v.begin(),v.end());
	
	
	int ret=-1;
	
	for(int i=1;i<v.size()-1;i++){
		int m=v[i]*2; //printf("ÁßÀ§°ª*2=%d\n",m);
		int t1=v[i-1]+v[v.size()-1];
		int t2=v[0]+v[i+1];
		int dap=max(abs(t1-m),abs(t2-m));
		
		ret=max(ret,dap);
	}
	printf("%d",ret);
	
	return 0;	
}


