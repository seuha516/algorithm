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
	
	int t;scanf("%d",&t);
	
	while(t--){
		char c[100]={0,};
		scanf("%s",c);
		if(c[0]=='P'){
			printf("skipped\n");
		}else{
			int d=0; int h=0;
			for(int i=0;c[i]!=0;i++){
				if(c[i]=='+'){
					h+=d;d=0;	continue;
				} 
				d*=10;
				d+=c[i]-48;
			}
			h+=d;
			printf("%d\n",h);
		}
	}
	
	return 0;
}


