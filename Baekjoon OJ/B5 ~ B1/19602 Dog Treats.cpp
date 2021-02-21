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
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int t=0; t+=a+b+b+c+c+c;
	if(t>=10){
		printf("happy");
	}else printf("sad");
	
    return 0;
}
