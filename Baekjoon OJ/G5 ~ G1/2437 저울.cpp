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

#define TEST 1

using namespace std;

int dap;

void hap(int* a,int* b,int c,int d){
	if((*b)+1 < c){
		dap=*b+1;	return; 
	}else{
		*b=d;
	}
	
	
}

int main(){
	
	int t; scanf("%d",&t);
	vector<int> v;
	for(int i=0;i<t;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}sort(v.begin(),v.end());
	
	int st=0; int end=0;
	for(int i=0;i<v.size();i++){
		hap(&st,&end,v[i]+st,v[i]+end);
		
		if(dap!=0){
			printf("%d",dap); return 0;
			
		}
				
	}
	printf("%d",end+1); 
	
	
    return 0;
}


