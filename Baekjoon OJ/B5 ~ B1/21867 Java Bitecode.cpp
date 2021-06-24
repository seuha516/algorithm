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
	
	int n; scanf("%d",&n); getchar(); string s; cin >> s;
	int len=0;
	for(int i=0;i<n;i++){
		char x=s[i];
		if(x=='J'||x=='A'||x=='V') continue;
		printf("%c",x); len++;
	}
	if(len==0) printf("nojava");
	
	return 0;
}












