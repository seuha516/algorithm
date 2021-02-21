#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int x; scanf("%d",&x);

    for(int i=0;i<x;i++){
    	int a; char c[100]={0,};
    	scanf("%d %s",&a,c);
    	for(int j=0;c[j]!=0;j++){
    		if(j==a-1){continue;
			}
    		printf("%c",c[j]);
		}
    	printf("\n");
	}

	
    return 0;
}

