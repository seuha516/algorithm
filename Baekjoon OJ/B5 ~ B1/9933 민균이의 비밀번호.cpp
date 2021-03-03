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

char go(string a,string b){
	if(a.length()!=b.length()) return 0;
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[a.length()-1-i]) return 0;
	}
	return a[a.length()/2];
}

int main(){
	
	vector<string> v;
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		string x; cin >> x; v.push_back(x);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(go(v[i],v[j])){
				printf("%d %c",v[i].length(),go(v[i],v[j])); return 0;
			}
		}
	}
	
	
	return 0;
}

