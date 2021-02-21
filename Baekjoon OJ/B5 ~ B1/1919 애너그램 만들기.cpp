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

char c1[1005];
char c2[1005];

int main(){
	
	scanf("%s %s",c1,c2);
	
	int alp[26]={0,}; int alp2[26]={0,};
	for(int i=0;c1[i]!=0;i++){
		alp[c1[i]-'a']++;
	}
	for(int i=0;c2[i]!=0;i++){
		alp2[c2[i]-'a']++;
	}
	int dap=0;
	for(int i=0;i<26;i++){
		dap+=abs(alp[i]-alp2[i]);
	}
	printf("%d",dap);
		
	return 0;
}


