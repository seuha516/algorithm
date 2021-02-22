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
	
	int n;scanf("%d",&n); 

	while(n--){
		vector <int> v;
		
		int a; a=5;
		for(int i=0;i<a;i++){
			int x; scanf("%d",&x); v.push_back(x);
		} 
		sort(v.begin(),v.end());
		
		if(v[3]-v[1]>=4){
			printf("KIN\n");
		}else{
			printf("%d\n",v[1]+v[2]+v[3]);
		}		
	}
	return 0;
}


