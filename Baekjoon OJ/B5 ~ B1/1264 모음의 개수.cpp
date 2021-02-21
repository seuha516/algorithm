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

using namespace std;

int main(){

	while(1){
		char c[266]={0,}; scanf("%[^\n]s",c); getchar(); if(c[0]=='#')break;
		int dap=0;
		for(int i=0;c[i]!=0;i++){
			if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='O'||c[i]=='o'||
			c[i]=='u'||c[i]=='U'){
				dap++;
			}
		}
		printf("%d\n",dap);
	}

	return 0;
}


