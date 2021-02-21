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

#define TEST 0
#define intmax 2147483647

using namespace std;

int cache[202][202];

int go(int n,int k){
	int &ret=cache[n][k];
	if(cache[n][k]!=-1)return ret;
	if(k==1) return 1;
	ret=0;
	for(int i=0;i<=n;i++){
		ret+=go(n-i,k-1);
		ret%=1000000000;
	}
	ret%=1000000000;
	return ret;
	
	
}

int main(){
	
	int n,k; scanf("%d %d",&n,&k);
	for(int i=0;i<202;i++){
		for(int j=0;j<202;j++){
			cache[i][j]=-1;
		}
	}
	cout << go(n,k);	
	
}

