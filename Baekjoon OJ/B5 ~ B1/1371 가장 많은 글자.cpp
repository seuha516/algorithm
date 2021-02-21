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
	char c[5002]={0,}; int alp[26]={0,}; int m=0;
	while(scanf("%s",c)!=EOF){
		for(int i=0;c[i]!=0;i++){
			if(c[i]<'a'||c[i]>'z') continue;
			alp[c[i]-'a']++; m=max(m,alp[c[i]-'a']);
		}		
		for(int i=0;i<5002;i++){
			c[i]=0;
		}
	}
	for(int i=0;i<26;i++){
		if(alp[i]==m){
			printf("%c",i+'a');
		}
	}
	return 0;
}


