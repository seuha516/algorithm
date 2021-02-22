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
#include <cmath>

#define TEST 0
#define intmax 2147483647

using namespace std;

int main(){
	
	int TC;
	TC=1;
	
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		int ok=1;
		
		vector<string>v1; vector<string>v2;
		
		for(int i=0;i<n;i++){
			string s; cin >> s;
			v1.push_back(s);
		}
		for(int i=0;i<n;i++){
			string s; cin >> s;
			v2.push_back(s);
		}
		for(int i=0;i<n;i++){
			string x;
			for(int j=0;j<v1[i].length();j++){
				x+=v1[i].substr(j,1); x+=v1[i].substr(j,1);
			}
			if(x!=v2[i]){
				ok=0;
			}
		}
		if(!ok){
			printf("Not ");
		}printf("Eyfa");
	}
}



