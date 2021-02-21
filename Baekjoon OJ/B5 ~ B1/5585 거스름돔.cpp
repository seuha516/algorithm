#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int x;scanf("%d",&x);
	
	x=1000-x; int t=0;
	if(x>=500){
		t++; x-=500;
	}
	t+=x/100; x%=100;
	if(x>=50){
		t++; x-=50;
	}
	t+=x/10; x%=10;
	if(x>=5){
		t++; x-=5;
	}
	t+=x;
	printf("%d",t);
	
	return 0;
}

