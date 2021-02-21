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
	
	int a,x,b,y; scanf("%d %d %d %d",&a,&x,&b,&y);
	int t; scanf("%d",&t);
	
	int aa=0,bb=0;
	
	aa+=max(0,t-30) * x * 21 +a;
	bb+=max(0,t-45) * y * 21 +b;
	printf("%d %d",aa,bb);
	
    return 0;
}
