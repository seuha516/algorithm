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
	
	int n;scanf("%d",&n);

	while(n--){
		
		int a; scanf("%d",&a);
		
		int t=0;
		while(a){
			if(a%2==1){
				printf("%d ",t);
			}
			a/=2;
			t++;
		}
		printf("\n");
	}
	return 0;
}

