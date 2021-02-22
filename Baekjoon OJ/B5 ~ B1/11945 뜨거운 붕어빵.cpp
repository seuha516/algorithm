#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	int x,y;scanf("%d %d",&x,&y);
	char c[20][20];
	for(int i=0;i<x;i++){
		scanf("%s",c[i]);
	}
	for(int i=0;i<x;i++){
		for(int j=y-1;j>=0;j--){
			printf("%c",c[i][j]);
		}
		printf("\n");
	}

}

