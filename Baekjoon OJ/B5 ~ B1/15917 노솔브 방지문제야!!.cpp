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

int main(){	
	int b; scanf("%d",&b);
	
	while(b--){
		int a;scanf("%d",&a);
		while(1){	
			if(a==1){
				printf("1\n");break;
			}
			if(a%2==0){
				a/=2;
			}else{
				printf("0\n");break;
			}
		}
	}
		
	return 0;
}


