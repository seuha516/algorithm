#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	char c[200]={0,};
	
	scanf("%s",c);
	
	char alp[30]={0};
	
	for(int i=0;c[i]!=0;i++){
		int t=c[i]-97;
		alp[t]++;
	}
	for(int i=0;i<26;i++){
		printf("%d ",alp[i]);
	}

	return 0;
}

