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

bool ok[100][100];

int main(){
	
	int n;scanf("%d",&n);
	while(n--){
		int a,b;scanf("%d %d",&a,&b);
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				ok[a+i][b+j]=1;
			}
		}
	}
	int dap=0;
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dap+=ok[i][j];
		}
	}
	printf("%d",dap);
	
	
	return 0;	
}


