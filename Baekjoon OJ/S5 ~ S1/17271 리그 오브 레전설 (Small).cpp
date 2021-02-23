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
using namespace std;

vector<int> cache(10005,-1); 
int n,m;

int go(int x){
	int &ret=cache[x];
	if(ret!=-1)return ret;
	if(x==0){
		return ret=1;
	}else if(x<m){
		return ret=go(x-1)%1000000007;
	}else{
		return ret=(go(x-1)%1000000007+go(x-m)%1000000007)%1000000007;
	}
} 
	
int main(){
	
	scanf("%d %d",&n,&m);
	printf("%d",go(n)%1000000007);
	
	return 0;	
}

