#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	for(int i=-999;i<=999;i++){
		for(int j=-999;j<=999;j++){
			if(a*i+b*j==c && d*i+e*j==f){
				printf("%d %d\n",i,j); return 0;
			}
		}
	}
	
    return 0;
}
