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
	
	printf("n e\n- -----------\n");  double e=1;
	printf("0 1\n");
	for(int i=1;i<10;i++){
		int pac=1;
		for(int j=1;j<=i;j++){
			pac*=j;
		}
		e+=(1/(double)pac);
		if(i==1){
			printf("%d %0.0lf\n",i,e);
		}else if(i==2){
			printf("%d %0.1lf\n",i,e);
		}else{
			printf("%d %0.9lf\n",i,e);
		}
	}
	
	return 0;
}


