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

using namespace std;
	
int main(){	
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	if(a+b==c){
		printf("%d+%d=%d",a,b,c);
	}else if(a-b==c){
		printf("%d-%d=%d",a,b,c);
	}else if(a*b==c){
		printf("%d*%d=%d",a,b,c);
	}else if(a/b==c){
		printf("%d/%d=%d",a,b,c);
	}else if(c+b==a){
		printf("%d=%d+%d",a,b,c);
	}else if(b-c==a){
		printf("%d=%d-%d",a,b,c);
	}else if(c*b==a){
		printf("%d=%d*%d",a,b,c);
	}else if(b/c==a){
		printf("%d=%d/%d",a,b,c);
	}
	
	return 0;
}

