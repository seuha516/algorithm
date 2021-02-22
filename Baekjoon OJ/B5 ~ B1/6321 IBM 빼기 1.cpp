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
#include <hash_map>

using namespace std;
int main(){
	
	int t; scanf("%d",&t);
	for(int i=1;i<=t;i++){
		char c[55]={0,};
		scanf("%s",c);
		printf("String #%d\n",i);
		for(int i=0;c[i]!=0;i++){
			char x=c[i];x++;
			if(x>'Z') x-=26;
			printf("%c",x);
			
		}printf("\n\n");
	}
	
	return 0;
}


