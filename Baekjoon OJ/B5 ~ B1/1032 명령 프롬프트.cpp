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

char c[52][52];

int main(){
	
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&c[i]);
	}
	
	for(int i=0;c[0][i]!=0;i++){
		int ok=1;
		for(int j=0;j<n-1;j++){
			if(c[j][i]!=c[j+1][i]){
				ok=0; break;
			}
		}
		if(ok){
			printf("%c",c[0][i]);
		}else{
			printf("?");
		}
	}
		
	return 0;
}
