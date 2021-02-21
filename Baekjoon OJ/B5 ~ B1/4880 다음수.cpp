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

using namespace std;
	
int main(){	
	
	while(1){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			break;
		}
		if(a+c==2*b){
			printf("AP %d\n",c+b-a);
		}else{
			printf("GP %d\n",c*b/a);
		}
	}
		
	return 0;
}


