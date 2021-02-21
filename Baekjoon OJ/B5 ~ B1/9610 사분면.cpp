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
	
	int n;scanf("%d",&n);
	int a,b,c,d,e;a=0;b=0;c=0;d=0;e=0;

	while(n--){
		
		int x,y;scanf("%d %d",&x,&y);
		if(x==0||y==0){
			e++;
		}else if(x>0&&y>0){
			a++;
		}else if(x<0&&y>0){
			b++;
		}else if(x<0&&y<0){
			c++;
		}else if(x>0&&y<0){
			d++;
		}
	
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n",a,b,c,d,e);

	return 0;
}


