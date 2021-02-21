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
		int dap=2015;
		bool ok[26]={0,};
		char c[1002]={0,};
		scanf("%s",c);
		
		for(int i=0;c[i]!=0;i++){
			if(!ok[c[i]-'A']){
				ok[c[i]-'A']=1;
				dap-=c[i];
			}
		}
		printf("%d\n",dap);
	}
	return 0;
}


