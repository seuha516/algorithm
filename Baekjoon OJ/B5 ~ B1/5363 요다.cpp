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
	
	int n; scanf("%d",&n); getchar();
	while(n--){
		string s;
		getline(cin,s);
		int cnt=0;
		for(int i=0;i<s.length();i++){
			if(cnt>1) printf("%c",s[i]);
			if(s[i]==' ') cnt++;
		}
		printf(" "); cnt=0;
		for(int i=0;i<s.length();i++){
			if(cnt<2) printf("%c",s[i]);
			if(s[i]==' ') cnt++;
		}
		printf("\n");
	}
	
	return 0;
}

