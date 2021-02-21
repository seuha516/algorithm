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
	
	for(int i=1;i<200;i++){
		int t=i+i*i+1;
		if(t==a){
			printf("%d",i);
		}
	}
	
	return 0;
}
