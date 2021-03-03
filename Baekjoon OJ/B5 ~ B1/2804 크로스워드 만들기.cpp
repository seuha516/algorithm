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
	
	string a,b; cin >> a >> b;
	
	int t1=-1,t2;
	for(int i=0;i<a.length();i++){
		for(int j=0;j<b.length();j++){
			if(a[i]==b[j]){
				t1=i; t2=j; break;
			}
		}
		if(t1!=-1) break;
	}
	for(int i=0;i<b.length();i++){
		for(int j=0;j<a.length();j++){
			if(i==t2) printf("%c",a[j]);
			else if(j==t1) printf("%c",b[i]);
			else printf(".");
		}
		printf("\n");
	}
	
	
	return 0;
}

