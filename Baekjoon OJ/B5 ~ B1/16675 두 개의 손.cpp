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

using namespace std;

int main(){	
	
	char a1,a2,b1,b2; scanf("%c %c %c %c",&a1,&a2,&b1,&b2);
	
	if(a1==a2&&b1==b2){
		if((a1==83&&b1==82)||(a1==82&&b1==80)||(a1==80&&b1==83)){
			printf("TK");
		}else if((a1==82&&b1==83)||(a1==80&&b1==82)||(a1==83&&b1==80)){
			printf("MS");
		}else{
			printf("?");
		}
	}else if(b1==b2){
		if((b1==83&&(a1==82||a2==82))||(b1==82&&(a1==80||a2==80))||(b1==80&&(a1==83||a2==83))){
			printf("MS");
		}else{
			printf("?");
		}
	}else if(a1==a2){
		if((a1==83&&(b1==82||b2==82))||(a1==82&&(b1==80||b2==80))||(a1==80&&(b1==83||b2==83))){
			printf("TK");
		}else{
			printf("?");
		}
	}else{
		printf("?");
	}
	
	return 0;
}

