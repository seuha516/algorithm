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
	
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("1"); return 0;
	}else if(n==2){
		printf("2"); return 0;
	}
	
	int t1=1,t2=1;
	for(int i=3;i<=n;i++){
		int p1,p2;
		p1=t1+t2; p2=t1;
		t1=p1%10; t2=p2%10;
		if(i==n)printf("%d\n",(t1+t2)%10);
	}
	
	return 0;
}


