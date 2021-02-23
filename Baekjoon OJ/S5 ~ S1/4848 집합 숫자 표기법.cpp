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
#include <deque>

using namespace std;

int main(){
	
	vector<string> v;
	v.push_back("{}"); v.push_back("{{}}");
	for(int i=2;i<=15;i++){
		string x="{";
		for(int j=0;j<i;j++){
			x+=v[j];
			if(j!=i-1)x+=",";
		}
		x+="}";
		v.push_back(x);
	}
	
	int TC; scanf("%d",&TC);
	while(TC--){
		string s1,s2; cin >> s1; cin >> s2;
		int a,b;
		for(int i=0;i<=15;i++){
			if(s1==v[i])a=i; if(s2==v[i])b=i;
		}
		cout << v[a+b] << endl;
		
	}
	
	return 0;	
}



