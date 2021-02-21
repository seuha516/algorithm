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

char a[1000053]; char b[38]; int alen,blen;
stack <int> s;

int popop(){
	if(s.size()<blen) return 0;
	
	stack <int> temp; 
	
	for(int i=blen-1;i>=0;i--){
		if(s.top()==b[i]){
			temp.push(s.top()); s.pop();
		}else{
			while(temp.size()){
				s.push(temp.top()); temp.pop();
			}
			return 0;	
		}
	}
	return 1;
}

int main(){
	
	scanf("%s %s",a,b);	alen=strlen(a); blen=strlen(b);
	
	for(int i=0;i<alen;i++){
		char x=a[i];
		s.push(x);
		while(popop()){
		}
	}
	
	stack <int> dap;
	while(s.size()){
		dap.push(s.top()); s.pop();
	}
	if(dap.size()==0){
		printf("FRULA");return 0;
	}
	while(dap.size()){
		printf("%c",dap.top()); dap.pop();
	}	
	
	return 0;
}

