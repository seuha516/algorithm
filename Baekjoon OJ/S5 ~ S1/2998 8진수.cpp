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

stack <int> s;

int main(){
	
	char c[105]={0,};
	scanf("%s",c);
	
	int t=0;
	for(int i=strlen(c)-1;i>=0;i--){
		s.push(c[i]-48);t++;
	}
	if(t%3==1){
		s.push(0); s.push(0);
	}else if(t%3==2){
		s.push(0);
	}
	
	while(s.size()){
		int a,b,c; a=s.top(); s.pop(); b=s.top(); s.pop(); c=s.top(); s.pop();
		int t=a*4+b*2+c;
		printf("%d",t);
	}
	
	return 0;
}



