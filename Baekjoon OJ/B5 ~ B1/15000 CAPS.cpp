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

	char c[1000002]={0,};scanf("%s",c);
	for(int i=0;c[i]!=0;i++){
		c[i]=toupper(c[i]);
	}
	printf("%s",c);
	
	
	return 0;
}


