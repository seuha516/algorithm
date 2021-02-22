#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
using namespace std;
int main(){
	
	int TC; scanf("%d",&TC); getchar();
	while(TC--){
		
		string s; getline(cin,s);
		int ok=1;
		for(int i=0;i<s.length()/2;i++){
			if(s[i]!=s[s.length()-1-i] && abs(s[i]-s[s.length()-1-i])!=32){
				ok=0; break;
			}
		}
		if(ok)printf("Yes\n");
		else printf("No\n");	
		
	}
	return 0;

}

