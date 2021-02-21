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
		
		char c1[25]={0,}; char c2[25]={0,};
		scanf("%s %s",c1,c2);
		printf("Distances: ");
		
		for(int i=0;c1[i]!=0;i++){
			int a=c1[i]; int b=c2[i]; int t;
			if(b>=a){
				t=b-a;
			}else{
				t=b+26-a;
			}
			printf("%d ",t);
		}printf("\n");
	}
	
	return 0;
}



