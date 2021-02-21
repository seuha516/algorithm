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
	int n=1;
	while(a!=1){
		if(a%2==0){
			a/=2;
		}else{
			a*=3;a+=1;
		}
		
		n++;
	}
	printf("%d",n);
	
	return 0;
}
