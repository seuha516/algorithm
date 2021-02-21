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

int jari(int a){
	int n=0;
	while(a){
		a/=10;n++;
	}
	return n;
}

int main() {
	
	int n;scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a;scanf("%d",&a);
		int t=pow(10,jari(a));
		if((a*a-a)%t==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}
