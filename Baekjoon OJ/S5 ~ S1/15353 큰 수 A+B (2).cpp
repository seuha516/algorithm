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

	char c1[10005];
	char c2[10005];
	
	scanf("%s %s",c1,c2);
	int list[10005]={0,};
	
	for(int i=0;i<strlen(c1);i++){
		list[i]+=c1[strlen(c1)-1-i]-48;
	}
	for(int i=0;i<strlen(c2);i++){
		list[i]+=c2[strlen(c2)-1-i]-48;
	}
	
	for(int i=0;i<10002;i++){
		if(list[i]>=10){
			list[i+1]++;
			list[i]-=10;
		}
	}
	int ok=0;
	for(int i=10004;i>=0;i--){
		if(list[i]!=0) ok=1;
		if(ok){
			printf("%d",list[i]);
		}
	}
	
	return 0;
}

