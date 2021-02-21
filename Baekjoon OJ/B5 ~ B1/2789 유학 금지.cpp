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
	
	char c[1000]={0,};scanf("%s",c);for(int i=0;c[i]!=0;i++){
		char x=c[i];
		if(x=='C'||x=='A'||x=='M'||x=='B'||x=='R'||x=='I'||x=='D'||x=='G'||x=='E')continue;
		printf("%c",x);
	}
	
	return 0;
}


