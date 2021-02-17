#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

string s;

int cache[2555];

bool isitP(int st,int end){
	bool ret=1;
	while(st<end) if(s[st++]!=s[end--]){ret=0; break;}
	return ret;
}

int go(int st){	
	int &ret=cache[st];
	if(ret!=-1) return ret;
	if(st==s.size()) return 0;
	
	int dap=987654321;
	for(int i=st;i<s.size();i++){
		if(isitP(st,i)){
			dap=min(dap,go(i+1)+1);
		}
	}	
	return ret=dap;
}

int main(){
	
	memset(cache,-1,sizeof(cache));
	cin >> s;
	printf("%d",go(0));

	return 0;
}

