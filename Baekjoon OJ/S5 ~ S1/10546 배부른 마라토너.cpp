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
#include <stack>

using namespace std;

vector <string> v1; vector <string> v2;

int main(){
	
	int n; scanf("%d",&n);
	int nn=n-1;
	while(n--){
		char c[25]={0,};
		scanf("%s",c);
		string s=c;
		v1.push_back(s);		
	}
	while(nn--){
		char c[25]={0,};
		scanf("%s",c);
		string s=c;
		v2.push_back(s);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int ok=1;
	for(int i=0;i<v2.size();i++){
		if(v1[i]!=v2[i]){
			printf("%s",v1[i].c_str()); ok=0; break;
		}
	}
	if(ok==1){
		printf("%s",v1[v1.size()-1].c_str());
	}
		
	return 0;
}

