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
	
	char c[1005]={0,};
	scanf("%s",c);
	for(int i=0;c[i]!=0;i++){
		c[i]-=3;
		if(c[i]<'A')c[i]+=26;
		printf("%c",c[i]);
	}
	
	return 0;
}


