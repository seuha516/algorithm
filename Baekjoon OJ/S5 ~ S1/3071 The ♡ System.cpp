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
	
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n); int nn=n;
		
		if(n==0){
			printf("0\n"); continue;
		}
		
		if(n<0) n*=-1;
		
		vector<char>v;
		
		while(n){			
			int t=n%3;
		
			if(t==2){
				n++;
				v.push_back('-');
			}else{
				n-=t;
				v.push_back(t+'0');
			}
			n/=3;
		}
		
		for(int i=0;i<v.size();i++){
			if(nn<0){
				char x=v[v.size()-1-i];
				if(x=='-'){
					printf("1");
				}else if(x=='1'){
					printf("-");
				}else{
					printf("0");
				}
			}else{
				printf("%c",v[v.size()-1-i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

