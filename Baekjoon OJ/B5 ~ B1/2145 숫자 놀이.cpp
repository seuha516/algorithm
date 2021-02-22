#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int jarihap(int a){
	return(a%100000/10000+a%10000/1000+a%1000/100+a%100/10+a%10);
}
int main(){
	
	while(1){
		int t;
		scanf("%d",&t);
		if(t==0)break;
		printf("%d\n",jarihap(jarihap(jarihap(t))));
	}
	return 0;
}

