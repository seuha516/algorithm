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

using namespace std;

int dap; 
vector <int> v;
int DFS(int n){	
	
	int size=v.size();

	if(size==n){
		dap++;
		v.pop_back();
		return 0;
	}
	
	for(int i=0;i<n;i++){
		int ok=1;
		for(int j=0;j<size;j++){
			if(abs(v[j]-i)==abs(size-j)){
				ok=0; 
				break;
			}
		}
		for(int j=0;j<size;j++){
			if(v[j]==i){
				ok=0; 
				break;
			}
		}
		if(ok==0){
			continue;
		}
		v.push_back(i);
		DFS(n);		
	}
	
	v.pop_back();
	return 0;
}

int main(){   
   
   int n;scanf("%d",&n);
   DFS(n);
   printf("%d",dap);
   
   return 0;
}


