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
	
	int a,b,c,d,e,f,g,h; scanf("%d %d %d %d %d %d %d %d",
	&a,&b,&c,&d,&e,&f,&g,&h);
	
	if(a+b+c+d>e+f+g+h){
		printf("Gunnar");
	}else if(a+b+c+d==e+f+g+h){
		printf("Tie");
	}else{
		printf("Emma");
	}
	
   
	return 0;
}


