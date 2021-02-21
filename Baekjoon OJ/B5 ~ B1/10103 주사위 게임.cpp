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
	
	int t;scanf("%d",&t);
	
	int t1=100, t2=100;
	while(t--){
		
		int a,b;
		scanf("%d %d",&a,&b);
		if(a<b){
			t1-=b;
		}
		if(a>b){
			t2-=a;
		}
		
	}
	printf("%d\n%d",t1,t2);
	
	return 0;
}



