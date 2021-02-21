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

	int a,b;scanf("%d %d",&a,&b);
	
	int aa=a;
	a=4*a-2;
	b%=a; if(b==0){
		b=a;
	}
	
	if(b<=2*aa){
		printf("%d",b);
	}else{
		b=4*aa-b;
		printf("%d",b);
	}
	
	return 0;
}


