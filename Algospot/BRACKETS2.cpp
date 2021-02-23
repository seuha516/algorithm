#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <stack>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC); getchar();
	while(TC--){
		string s; cin >> s; getchar();
		stack<char> st;
		bool ok=1;
		
		for(int i=0;i<s.length();i++){
			char x=s[i];
			if(st.empty()){
				if(x=='(' || x=='{' || x=='['){
					st.push(x);
				}else{
					ok=0; break;
				}	
			}else{
				if(x=='(' || x=='{' || x=='['){
					st.push(x);
				}else{
					if(x-st.top()<3) st.pop();
					else{
						ok=0; break;
					}
				}
			}
		}	
		if(ok && st.empty())printf("YES\n");	
		else printf("NO\n");
	}
	
	return 0;
}

