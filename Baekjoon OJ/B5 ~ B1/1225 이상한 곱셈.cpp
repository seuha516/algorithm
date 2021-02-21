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
	
	char c1[20005]; scanf("%s",c1);
	char c2[20005]; scanf("%s",c2);
	
	long long d1=0;long long d2=0;
	
	for(int i=0;c1[i]!=0;i++){
		d1+=(c1[i]-48);
	}
	for(int i=0;c2[i]!=0;i++){
		d2+=(c2[i]-48);
	}
	
	printf("%lld",d1*d2);
	
	return 0;
}
 


