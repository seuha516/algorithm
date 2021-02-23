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
	
	scanf("%s",c);
	stack <char> s;
	
	
	int lev=0;
	int dap=0;
	int gaesoo=0;
	int past=0;
	
	for(int i=0;c[i]!=0;i++){
		
		if(c[i]=='('){
			lev++; past=-1; gaesoo++;
		}else if(c[i]==')'){
			lev--; 
			if(past==-1){
				dap+=lev; gaesoo--;
			}
			past=1;
		}
		
	}
	printf("%d",dap+gaesoo);
	
return 0;}


