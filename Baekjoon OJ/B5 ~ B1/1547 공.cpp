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

using namespace std;


int main(){	

	int n; scanf("%d",&n);
	
	int a,b,c;
	a=1;b=2;c=3;
	
	while(n--){
		int x,y; scanf("%d %d",&x,&y);
		
		int w;
		if(x==1&&y==2){
			w=a;
			a=b;
			b=w;
		}else if(x==1&&y==3){
			w=a;
			a=c;
			c=w;
		}else if(x==2&&y==1){
			w=a;
			a=b;
			b=w;
		}else if(x==2&&y==3){
			w=b;
			b=c;
			c=w;
		}else if(x==3&&y==1){
			w=a;
			a=c;
			c=w;
		}else if(x==3&&y==2){
			w=b;
			b=c;
			c=w;
		}
		
	}
	
	if(a==1){
		printf("1");
	}else if(b==1){
		printf("2");
	}else if(c==1){
		printf("3");
	}
	
	return 0;
}
 


