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

using namespace std;

int gcd(int a,int b){
   int w;
   while(b){
      w=a%b;
      a=b;
      b=w;
   }
   return a;
}

int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int arr[100]={0,};
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		long long dap=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				dap+=gcd(arr[i],arr[j]);
			}
		}
		printf("%lld\n",dap);
	}
  
    return 0;
}

