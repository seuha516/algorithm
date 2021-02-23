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
		int x; scanf("%d",&x); getchar();
		
		int hap=0;
		
		char t;
		while(1){
			t=getchar();
			if(t=='\n') break;
			hap+=(t-'0');
		}
		printf("%d\n",hap%(x-1));		
	}
    return 0;
}


