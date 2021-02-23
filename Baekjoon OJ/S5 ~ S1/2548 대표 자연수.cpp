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
#include <stack>
#include <hash_map>

using namespace std;

int main(){
	
	vector <int> v; vector <int> hap;
	int n;scanf("%d",&n); int nn=n;
	while(n--){
		int x;scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());
	
	int temp=0;
	for(int i=0;i<v.size();i++){
		temp+=v[i]; hap.push_back(temp);
	}
	
	int min=1<<30; int minnum=-1;
	
	for(int i=v[0];i<=v[v.size()-1];i++){
		vector<int>::iterator iter=upper_bound(v.begin(),v.end(),i);
		int x=iter-v.begin(); 
		
		int t;
		t=(i*(2*x-nn))-(2*hap[x-1])+hap[nn-1];
		
		if(t<min){
			min=t; minnum=i;
		}
				
	}
	printf("%d",minnum);
	
	return 0;
}




