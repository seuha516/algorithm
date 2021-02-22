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
	long long d; scanf("%lld",&d);
	
	d=(d+1)*d*(d-1)/2;
	printf("%lld",d);
	
	return 0;	
}

