#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

vector<int> min_soinsoo;
vector<int> yak_gaesoo;

void sosu_making(){  
	min_soinsoo.push_back(-1); min_soinsoo.push_back(-1);
	for(int i=2;i<=10000001;i++) min_soinsoo.push_back(i);	
	for(int i=2;i<=3200;++i){
		if(min_soinsoo[i]==i){
			for(int j=i*i;j<=10000001;j+=i){
				if(min_soinsoo[j]==j){
					min_soinsoo[j]=i;
				}
			}
		}		
	}
}

int main(){
	sosu_making();

	yak_gaesoo.push_back(1);yak_gaesoo.push_back(1);
	for(int i=2;i<=10000001;i++){
		int temp=0;
		int x=i;
		while(x%min_soinsoo[i]==0){
			x/=min_soinsoo[i]; temp++;
		}
		yak_gaesoo.push_back( yak_gaesoo[i/min_soinsoo[i]]  / temp * (temp+1) );
	}
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,lo,hi; scanf("%d %d %d",&n,&lo,&hi);
		int dap=0;		
		for(int i=lo;i<=hi;i++){
			if(yak_gaesoo[i]==n)dap++;
		}
		printf("%d\n",dap);
	}
	
	return 0;
}
