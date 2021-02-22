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
	
	int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
	
	for(int i=0;i<=d;i+=a){
		for(int j=0;i+j<=d;j+=b){
			if((d-i-j)%c==0){
				printf("1"); return 0;
			}
		}
	}
	printf("0");
	
	return 0;
}


