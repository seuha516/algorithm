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

using namespace std;

int main(){
	while(1){
		int x; scanf("%d",&x); if(x==0)break;
		while(x>9){
			printf("%d ",x);
			vector<int>v;
			while(x){
				v.push_back(x%10); x/=10;
			}
			int dap=1;
			for(int i=0;i<v.size();i++){
				dap*=v[i];
			}
			x=dap;
		}
		printf("%d ",x); 
		printf("\n");				
	}
	return 0;	
}



