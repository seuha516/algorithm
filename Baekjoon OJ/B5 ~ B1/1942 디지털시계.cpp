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
#include <functional>
#include <random>

using namespace std;

int main(){
	
	int tk=3;
	while(tk--){
		
		int a,b,c,d,e,f; scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&d,&e,&f);
		int dap=0;
		while(1){
			int t1=a*10000+b*100+c;
			int t2=d*10000+e*100+f;
		
			
			if(t1%3==0)dap++;
				
				if(t1==t2)break;
			
			c++;
			if(c==60){
				c=0;b++;
			}
			if(b==60){
				b=0;a++;
			}
			if(a==24){
				a=0;
			}
			
		}	
	
		printf("%d\n",dap);
	}
	
return 0;}


