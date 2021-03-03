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

bool go(string s,bool a,bool b,bool c){
	string x;
	for(int i=0;i<s.length();i++){
		if(s[i]=='A'){
			if(a) x+='(';
			else x+=')';
		}else if(s[i]=='B'){
			if(b) x+='(';
			else x+=')';
		}else{
			if(c) x+='(';
			else x+=')';
		}
	}
	stack<char> st;
	for(int i=0;i<x.length();i++){
		if(x[i]=='('){
			st.push(x[i]);
		}else{
			if(st.empty()) return 0;
			if(st.top()==')') return 0;
			st.pop();
		}
	}
	return st.empty();
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		string s; cin >> s;
		bool dap=0;
		dap=dap|go(s,0,0,0); 
		dap=dap|go(s,0,0,1);
		dap=dap|go(s,0,1,0);
		dap=dap|go(s,0,1,1);
		dap=dap|go(s,1,0,0);
		dap=dap|go(s,1,0,1);
		dap=dap|go(s,1,1,0);
		dap=dap|go(s,1,1,1);
		if(dap) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}

