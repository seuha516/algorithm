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

using namespace std;

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		char c1[25]={0,};scanf("%s",c1); 
		printf("%c%c\n",c1[0],c1[strlen(c1)-1]);
	}
	
	return 0;
}



