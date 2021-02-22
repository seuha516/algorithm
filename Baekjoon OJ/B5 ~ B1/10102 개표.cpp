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
	
	int x;scanf("%d",&x);
	
	char c[55]={0,};
	scanf("%s",c);
	
	int t1=0, t2=0;
	 
	for(int i=0;c[i]!=0;i++){
		if(c[i]=='A'){
			t1++;
		}else{
			t2++;
		}
	}
	if(t1>t2){
		printf("A");
	}else if(t2>t1){
		printf("B");
	}else{
		printf("Tie");
	}
	
	return 0;
}

