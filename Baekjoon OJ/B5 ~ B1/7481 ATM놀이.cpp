#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
	
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		
		int ss=0;
		if(a>b){
			int temp=a; a=b; b=temp; ss=1;
		}
		int cc=c;
		int d1=0,d2=0;
		
		int te=c/b;
		int pp=0;
		c-=te*b; d2=te;
		
		while(1){
			if(c%a==0){
				d1=c/a; break;
			}
			d2--; c+=b;	
			if(d2<0){
				printf("Impossible\n"); pp=1; break;
			}
		}
		
		if(pp){
			continue;
		}
		
		if(ss==1){
			int ttt=d1; d1=d2; d2=ttt;
		}
		printf("%d %d\n",d1,d2);

	}
	
    return 0;
}



