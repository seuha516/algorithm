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
#include <random>

using namespace std;

char c[100005];

int main(){
	
	scanf("%[^\n]s",c);
	stack <char> s;
	
	bool pass=false;
	
	for(int i=0;c[i]!=0;i++){
		if(c[i]=='<'){
			while(!s.empty()){
				printf("%c",s.top());s.pop();
			}
			pass=1;
			printf("%c",c[i]);
		}else if(c[i]=='>'){
			pass=0;
			printf("%c",c[i]);
		}else if(pass==1){
			printf("%c",c[i]);
		}else if(c[i]==' '){
			while(!s.empty()){
				printf("%c",s.top());s.pop();
			}
			printf(" ");
		}else{
			s.push(c[i]);
		}
	} 
	while(!s.empty()){
		printf("%c",s.top());s.pop();
	}
	
	
return 0;}

