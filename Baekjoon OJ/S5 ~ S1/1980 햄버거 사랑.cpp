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
	
	int n,m,t;scanf("%d %d %d",&n,&m,&t);
	
	int ch=0; int dap=0;
	
	for(int i=0;i<=t;i+=n){
		for(int j=0;i+j<=t;j+=m){
			if(ch<i+j){
				ch=i+j;
				dap=i/n+j/m;
			}else if(ch==i+j){
				dap=max(dap,i/n+j/m);
			}
		}
	}
	
	printf("%d %d",dap,t-ch);
	return 0;
}



