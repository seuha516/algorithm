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
	
	char c[5]={0,};
	
	scanf("%s",c); int a;scanf("%d",&a);
	
	for(int i=0;i<a&&i<strlen(c)*atoi(c);i++){
		printf("%c",c[i%strlen(c)]);
		
	}
	return 0;
}


