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

using namespace std;

int main(){
	
	char c[5][16]={0,};
	for(int i=0;i<5;i++){
		scanf("%s",&c[i]);
	}
	
	for(int j=0;j<16;j++){
		for(int i=0;i<5;i++){
			char x=c[i][j];
			if(x!=0){
				printf("%c",x);
			}
		}
	}
	return 0;
	
}


