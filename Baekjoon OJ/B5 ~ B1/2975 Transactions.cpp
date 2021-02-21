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
	while(1){
		int a; char b; int c; scanf("%d %c %d",&a,&b,&c);
		if(a==0&&b=='W'&&c==0){
			break;
		}	
		if(b=='W'){
			if(a-c>=-200){
				printf("%d",a-c);
			}else{
				printf("Not allowed");
			}
		}else{
			printf("%d",a+c);			
		}
		printf("\n");
	}
	return 0;
}

