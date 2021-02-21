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
#include <stack>
using namespace std;

int main(){
	while(1){
		int x;scanf("%d",&x);if(!x)break;
		if(x>=1000000&&x<5000000){
			x=9*x/10;
		}else if(x>=5000000){
			x=x*4/5;
		}
		printf("%d\n",x);
	}
return 0;}


