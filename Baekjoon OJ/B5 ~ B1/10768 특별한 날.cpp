#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	
	int a,b; scanf("%d %d",&a,&b);
	
	if(a>2){
		printf("After");
	}else if(a==2){
		if(b>18){
			printf("After");
		}else if(b==18){
			printf("Special");
		}else{
			printf("Before");
		}
	}else{
		printf("Before");
	}
	
	

}
