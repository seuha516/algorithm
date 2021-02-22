#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>

using namespace std;

int main(){
	
	while(1){
		int x; scanf("%d",&x); if(x==0) break;
		getchar();
		int dap=0;
		
		for(int i=0;i<x;i++){
			char c[1000]={0,};
			scanf("%[^\n]s",c); getchar();
			for(int j=dap;1;j++){
				if(c[j]==' '||c[j]=='\n'||c[j]==0){
					dap=j; break;
				}
			}
		}
		printf("%d\n",dap+1);		
		
	}
	return 0;

}

