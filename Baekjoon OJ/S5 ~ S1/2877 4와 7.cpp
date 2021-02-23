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

using namespace std;

long long intpow(long long a,int n){
   long long t=1;
   for(int i=0;i<n;i++){
      t*=a;
   }
   return t;
}

int arr[2]={4,7};

int main(){
	
	int n;scanf("%d",&n);
	
	int i;
	for(i=1;1;i++){
		if(n>intpow(2,i)){
			n-=intpow(2,i);
		}else{
			break;
		}
	}
	n--;
	stack <int> s;
	
	
	while(i--){
		s.push(n%2);
		n/=2;
	}
	while(s.size()){
		printf("%d",arr[s.top()]); s.pop();
	}
	
	return 0;
}



