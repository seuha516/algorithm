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
	
	int t; scanf("%d",&t);
	while(t--){
		
		char c[1005]={0,};
		getchar(); scanf("%[^\n]s",c);
		
		char *ptr=strtok(c," ");
		while (ptr!=NULL){
			string str=ptr;reverse(str.begin(),str.end());
			printf("%s ",str.c_str());
			ptr=strtok(NULL," ");
		}
		printf("\n");
	}
	
	return 0;	
}


