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
#include <random>

using namespace std;

int main(){
	
	int t;scanf("%d",&t); getchar();
	while(t--){		
		char c[102]={0,}; 
		scanf("%[^\n]s",c); getchar();
	
		int dap=0;
		
		for(int i=0;c[i]!=0;i++){
			if(c[i]>='A'&&c[i]<='Z'){
				dap+=c[i]-'A'+1;
			}
		}
		
		if(dap==100){
			printf("PERFECT LIFE\n");
			
		}else{
			printf("%d\n",dap);
		}
	}
	
	
return 0;}



