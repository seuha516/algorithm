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
#include <hash_map>

using namespace std;

int main(){
	
	for(int i=1000;i<=9999;i++){
		int x1=i,x2=i,x3=i;
		int t1=0,t2=0,t3=0;
		
		while(x1){
			t1+=(x1%10); x1/=10;
		}
		while(x2){
			t2+=(x2%16); x2/=16;
		}
		while(x3){
			t3+=(x3%12); x3/=12;
		}
		if(t1==t2&&t2==t3){
			printf("%d\n",i);
		}
	}
	
	return 0;
}


