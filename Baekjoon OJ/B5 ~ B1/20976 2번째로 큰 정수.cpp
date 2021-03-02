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
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	if(a<b) swap(a,b); if(b<c) swap(b,c); if(a<c) swap(a,c);
	if(a<b) swap(a,b); if(b<c) swap(b,c); if(a<c) swap(a,c);
	cout<<b;
	
	return 0;
}

