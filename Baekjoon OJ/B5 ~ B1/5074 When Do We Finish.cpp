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

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	while(1){
		
		int a,b,c,d;scanf("%d:%d %d:%d",&a,&b,&c,&d);
		if(a*a+b*b+c*c+d*d==0)break;
		
		a+=c;b+=d;
		
		a+=(b/60);
		b%=60;
		
		if(a>23){
			printf("%02d:%02d +%d\n",a%24,b,a/24);
		}else{
			printf("%02d:%02d\n",a,b);
		}
	}
	
	
return 0;}

