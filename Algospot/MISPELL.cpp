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
	
	int TC; scanf("%d",&TC);
	for(int i=1;i<=TC;i++){
		int a; string s;
		scanf("%d",&a); getchar(); cin >> s;
		printf("%d ",i);
		for(int j=0;j<s.length();j++){
			if(j!=a-1) printf("%c",s[j]);
		}
		printf("\n");
	}
	
	return 0;
}

