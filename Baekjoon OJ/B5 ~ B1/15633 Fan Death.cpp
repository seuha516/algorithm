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
	
	int n; scanf("%d",&n);
	int t=0;
	
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i==i){
				t+=i;
			}else{
				t+=i; t+=n/i;
			}
		}
	}
	printf("%d",5*t-24);

	return 0;
}


