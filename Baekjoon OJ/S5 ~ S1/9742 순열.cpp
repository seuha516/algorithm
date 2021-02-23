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

char c[15]={0,}; int d; int order; vector <int> v; int len;

void go(){
	
	
	if(v.size()==len){
		order++; //printf("order=%d\n",order);
		if(order==d){
			for(int i=0;i<v.size();i++){
				printf("%c",c[v[i]]);
			}
		}	
		v.pop_back(); return;
	}
	for(int i=0;i<len;i++){
		if(v.empty()){
			v.push_back(i); go();
		}else{
			int ok=1;
			for(int j=0;j<v.size();j++){
				if(v[j]==i) ok=0;
			}
			if(ok){
				v.push_back(i); go();
			}else{
				continue;
			}
	
		}
	}
	
	if(v.size()) v.pop_back();
	return;
	
}


int main(){
	
	while(scanf("%s %d",c,&d)!=EOF){
		order=0; len=strlen(c);		
		printf("%s %d = ",c,d);
		go();		
		if(order<d){
			printf("No permutation");
		}
		printf("\n");
	}
	
	return 0;
}



