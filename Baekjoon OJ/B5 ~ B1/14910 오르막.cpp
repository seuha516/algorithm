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
	
	int x; int temp=-987654321;
	while(scanf("%d",&x)!=EOF){
		if(temp > x){
			printf("Bad"); return 0;
		}temp=x;
	}
	printf("Good");
	
	
    return 0;
}
