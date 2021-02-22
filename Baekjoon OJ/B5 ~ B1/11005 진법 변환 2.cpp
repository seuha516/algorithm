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
	
	vector <int> dap;
	
	int n,x;scanf("%d %d",&n,&x);
	
	while(n){
		dap.push_back(n%x);
		n/=x;
	}
	for(int i=dap.size()-1;i>=0;i--){
		int x=dap[i];
		if(x<10) printf("%d",x);
		else{
			printf("%c",x-10+'A');
		}
	}
	
	return 0;
	
}

