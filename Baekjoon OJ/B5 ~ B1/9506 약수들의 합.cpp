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
	
	while(1){
		int x;scanf("%d",&x); if(x==-1) break;	
		
		vector <int> v; int hap=0;
		for(int i=1;i<=sqrt(x);i++){
			if(x%i==0){
				if(i==x/i){
				v.push_back(i); hap+=i;
				}else{
					v.push_back(i);v.push_back(x/i);hap+=i;hap+=x/i;
				}
			}
		}
		hap-=x;
		sort(v.begin(),v.end());
		if(hap==x){
			printf("%d = %d",x,v[0]);
			for(int i=1;i<v.size()-1;i++){
				printf(" + %d",v[i]);
			}printf("\n");
		}else{
			printf("%d is NOT perfect.\n",x);
		}
		
	}
	
	return 0;
}


