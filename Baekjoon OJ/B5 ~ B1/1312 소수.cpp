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
	int a,b,n; scanf("%d %d %d",&a,&b,&n);
	
	a=a%b;
	
	for(int i=1;i<1000050;i++){
		a*=10;
		if(i==n) printf("%d",a/b);
		a%=b;
	}
	
	return 0;
}


