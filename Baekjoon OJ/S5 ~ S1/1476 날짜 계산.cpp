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
	
	int e,s,m;scanf("%d %d %d",&e,&s,&m);
	
	int t=1;
	int a=1; int b=1; int c=1;
	while(1){
		
		if(a==e&&b==s&&c==m){
			break;
		}
		
		a++; b++; c++;
		if(a==16){
			a-=15;
		}
		if(b==29){
			b-=28;
		}
		if(c==20){
			c-=19;
		}
		
		t++;

	}
	printf("%d",t);	
  
    return 0;
}



