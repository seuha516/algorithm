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

using namespace std;

long long n,k;

long long same,small;

void go(long long x){
	same=small=0;
	for(long long i=1;i<=n;i++){
		if(x%i==0 && x/i<=n) same++;
		small += min(n,(x-1)/i);
	}
}

long long find(long long st,long long end){
	if(st==end) return st;
	long long mid=(st+end)/2;
	
	go(mid);
	
	long long bonus=0;
	if(same==0) bonus=1;
	
	if(small+1 <= k && k <= small+same+bonus) return mid;
	else if(k<small+1) return find(st,mid);
	else return find(mid+1,end);
}

int main(){
	
	scanf("%lld %lld",&n,&k);
		
	long long dap=find(1,10000000000);
	while(1){
		go(dap);
		if(same!=0){
			break;
		}
		dap++;
	}
	
	printf("%lld",dap);


	return 0;

}

