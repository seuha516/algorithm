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
	
	int n,l,d;scanf("%d %d %d",&n,&l,&d);
	int dap=0;
	for(int i=0;1;i++){
		if((i%d==0&&i%(l+5)>=l)||i%d==0&&i>=n*l+5*(n-1)){
			dap=i;break;
		}
	}
	printf("%d",dap);
	
	
	
	return 0;
}

