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
	
	int n; scanf("%d",&n);
	
	int a[5]; int d=0;
	for(int i=0;i<5;i++){
		scanf("%d",a+i);
		if(a[i]==n){
			
			d++;
		}
	}
	printf("%d",d);
	
	return 0;
}
