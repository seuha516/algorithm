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
	int a,b; scanf("%d %d",&a,&b);
	
	for(int i=1;1;i+=b){
		if(i%a==0){
			printf("%d",i/a); break;
		}
	}
		
	return 0;
}

