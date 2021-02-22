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
	
	int t; scanf("%d",&t);
	while(t--){
		int x; scanf("%d",&x);
		
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
		t-=x;
		if(t==x){
			printf("Perfect\n");
		}else if(t>x){
			printf("Abundant\n");
		}else{
			printf("Deficient\n");
		}
	}
	return 0;
}


