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

int main(){   
	
	vector <int> v;
	int n,k; scanf("%d %d",&n,&k);
	
	int t=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			v.push_back(i);
			if(i==n/i){
				
			}else{
				v.push_back(n/i);
			}
		}
	}
	sort(v.begin(),v.end());
	if(k<=v.size()){
		printf("%d",v[k-1]);
		
	}else{
		printf("0");
	}

	
	return 0;
}

