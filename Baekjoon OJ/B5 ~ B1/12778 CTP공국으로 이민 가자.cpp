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
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647
#define LIMIT 10000

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; char type; scanf("%d %c",&n,&type); getchar();
		if(type=='C'){
			for(int i=0;i<n;i++){
				char x; scanf("%c",&x); getchar();
				printf("%d ",x-'A'+1);
			}printf("\n");
		}else{
			for(int i=0;i<n;i++){
				int x; scanf("%d",&x);
				printf("%c ",x+'A'-1);
			}printf("\n");
		}
	}

	return 0;	
}


