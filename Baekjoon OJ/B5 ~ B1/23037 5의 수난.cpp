#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;


int main(){
	
	int x; scanf("%d", &x);
	int a = x%10; x/=10;
	int b = x%10; x/=10;
	int c = x%10; x/=10;
	int d = x%10; x/=10;
	int e = x%10;
	printf("%d",a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e);
	
	return 0;
}



