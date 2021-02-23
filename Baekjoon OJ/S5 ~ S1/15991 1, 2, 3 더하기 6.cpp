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

int main(){
	
    long long b[100002]={0,};
    b[1]=1;
    b[2]=2;
    b[3]=4;
    for(int i=4;i<100002;i++){
        b[i]=b[i-3]+b[i-2]+b[i-1];
        b[i]%=1000000009;
    }
    
    int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		if(n==1){
			printf("1\n"); continue;
		}else if(n==3||n==2){
			printf("2\n"); continue;
		}
		printf("%lld\n",(b[n/2]+b[n/2-1])%1000000009);
	} 
    return 0;
}


