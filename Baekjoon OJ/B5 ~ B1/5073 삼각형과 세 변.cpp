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
		if(a+b<=c||b+c<=a||c+a<=b){
			printf("Invalid\n");continue;
		}
		if(a==b&&b==c){
			printf("Equilateral\n");
		}else if(a==b||b==c||c==a){
			printf("Isosceles\n");
		}else{
			printf("Scalene\n");
		}
	}
	return 0;
}


