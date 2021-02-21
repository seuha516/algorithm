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

using namespace std;

int main() {
	
	int a;scanf("%d",&a);
	int alp[26]={0};
	for(int i=0;i<a;i++){
		char c[260]; scanf("%s",c);
		alp[c[0]-97]++;
	}
	int k=0;
	for(int i=0;i<26;i++){
		if(alp[i]>4){
			printf("%c",i+97);	k=1;
		}
	}

	if(!k){
		printf("PREDAJA");
	}
	
	return 0;
}
