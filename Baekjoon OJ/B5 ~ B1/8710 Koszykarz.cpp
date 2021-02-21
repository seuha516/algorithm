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
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	int t; a=b-a;
	if(a%c==0){
		t=a/c;
	}else{
		t=a/c+1;
	}
	printf("%d",t);

}
