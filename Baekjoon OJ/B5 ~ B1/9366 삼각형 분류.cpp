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

	int n; scanf("%d",&n);int t=1;
	while(n--){
		int a,b,c;scanf("%d %d %d",&a,&b,&c);
		if(a+b<=c||b+c<=a||c+a<=b){
			printf("Case #%d: invalid!\n",t);
		}else
		if(a==b&&b==c){
			printf("Case #%d: equilateral\n",t);
		}else if(a==b||b==c||c==a){
			printf("Case #%d: isosceles\n",t);
		}else{
			printf("Case #%d: scalene\n",t);
		}
		
		t++;
	}

	return 0;
}


