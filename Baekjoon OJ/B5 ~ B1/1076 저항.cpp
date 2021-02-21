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

	long long a[3];
	
	for(int i=0;i<3;i++){
		string str; char c[10];
		scanf("%s",c); str=c;
		
		if(str=="black"){
			a[i]=0;
		}else if(str=="brown"){
			a[i]=1;
		}else if(str=="red"){
			a[i]=2;
		}else if(str=="orange"){
			a[i]=3;
		}else if(str=="yellow"){
			a[i]=4;
		}else if(str=="green"){
			a[i]=5;
		}else if(str=="blue"){
			a[i]=6;
		}else if(str=="violet"){
			a[i]=7;
		}else if(str=="grey"){
			a[i]=8;
		}else if(str=="white"){
			a[i]=9;
		}
	}
	
	long long d;d=(a[0]*10+a[1]);
	for(int i=0;i<a[2];i++){
		d*=10;
	}
	
	printf("%lld",d);	
	
	return 0;
}
 
