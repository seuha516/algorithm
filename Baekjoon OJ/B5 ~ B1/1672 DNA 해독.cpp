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

using namespace std;

int main() {
	
	int n;scanf("%d",&n);
	
	char c[1000005];
	scanf("%s",c);

	if(n==1){
		printf("%c",c[0]); return 0;
	}
	
	for(int i=n-1;i>0;i--){
		char a=c[i-1];
		char b=c[i];
		if(a+b==130){
			c[i-1]=65;
		}else if(a+b==136){
			c[i-1]=67;
		}else if(a+b==132){
			c[i-1]=65;
		}else if(a+b==149){
			c[i-1]=71;
		}else if(a+b==142){
			c[i-1]=71;
		}else if(a+b==138){
			c[i-1]=84;
		}else if(a+b==155){
			c[i-1]=65;
		}else if(a+b==134){
			c[i-1]=67;
		}else if(a+b==151){
			c[i-1]=71;
		}else if(a+b==168){
			c[i-1]=84;
		}
	}
	printf("%c",c[0]);
	
	return 0;
}
