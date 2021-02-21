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
#include <stack>

using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	while(1){
		int x;scanf("%d",&x);
		if(!x)break;
		
		int t=0;
		for(int i=1;i<=sqrt(x);i++){
			if(x%i==0){
				if(x/i==i){
					t+=i;
				}else{
					t+=i; t+=x/i;
				}
			}
		}
		printf("%d ",x);
		t-=x;
		if(t==x){
			printf("PERFECT\n");
		}else if(t>x){
			printf("ABUNDANT\n");
		}else{
			printf("DEFICIENT\n");
		}
		
	}
	
return 0;}





