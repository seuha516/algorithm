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

using namespace std;

int main(){
	
	string str[105];
	int a,b; scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++){
		cin >> str[i];
	}	
	sort(str,str+a);
	
	printf("%s",str[b-1].c_str());
		
	return 0;
}


