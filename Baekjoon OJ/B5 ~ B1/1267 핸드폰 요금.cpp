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
	
	int n;scanf("%d",&n);
	
	int hap1=0;
	int hap2=0;
	
	while(n--){
		int a;scanf("%d",&a);
		hap1+=((a/30)+1)*10;
		hap2+=((a/60)+1)*15;		
	}
	if(hap1>hap2){
		printf("M %d",hap2);
	}else if(hap1<hap2){
		printf("Y %d",hap1);
	}else{
		printf("Y M %d",hap1);
	}

	return 0;
}
 

