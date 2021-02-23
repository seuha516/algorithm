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

int nanoogi(int a,int b){
	if(abs(a)%abs(b)==0){
		return a/b;
	}else{
		if(a>0){
			return a/b;
		}else{
			return a/b+1;
		}
	}
}
int namergi(int a,int b){
	return (a-(b*nanoogi(a,b)));
}

int main(){
	
	int x;scanf("%d",&x);
	if(x==0){
		printf("0");return 0;
	}
	
	vector <int> dap;
	
	int k=1;
	while(x){
		dap.push_back(namergi(x,-2));
		x=nanoogi(x,-2);
	}
	
	for(int i=dap.size()-1;i>=0;i--){
		printf("%d",dap[i]);
	}
	
	return 0;
	
}


