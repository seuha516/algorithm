#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	
	int aa[3][2];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&aa[i][j]);
		}	
	}
	
	int a=abs(aa[2][0]-aa[0][0]); int b=abs(aa[2][1]-aa[0][1]);
	
	
	int c=abs(aa[2][0]-aa[1][0]); int d=abs(aa[2][1]-aa[1][1]);
	
	int t=max(a,b);
	int tt=d+c;
	
	if(t<tt){
		printf("bessie");
	}else if(t>tt){
		printf("daisy");
	}else{
		printf("tie");
	}
	
	
	return 0;
		

}
