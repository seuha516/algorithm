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
		int a,b;scanf("%d %d",&a,&b);
		
		printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
	}
	

	return 0;
}



