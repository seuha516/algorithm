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
#include <random>

using namespace std;

int main(){
	
	int n,k; scanf("%d %d",&n,&k);
	bool ok[1400]={0,};
	
	int cnt=1;
	
	for(int i=2;i<=n;i++){
		if(ok[i])continue;
		int t=i;
		while(t<=n){
			if(!ok[t])
			{
				ok[t]=1; 				
				if(cnt==k){
					printf("%d",t); return 0;
				}
				
				cnt++;
			}
			t+=i;
		}
	}
	
return 0;}


