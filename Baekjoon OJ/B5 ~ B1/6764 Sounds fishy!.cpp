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

#define TEST 1

using namespace std;


int main(){
	
	int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a==b&&b==c&&c==d){
		printf("Fish At Constant Depth");
	}else if(a>b && b>c && c>d){
		printf("Fish Diving");
	}else if(a <b&& b<c && c<d){
		printf("Fish Rising");
	}else{
		printf("No Fish");
	}

	
    return 0;
}



