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

long long dp[1000002]={0,};

int main(){   
   
   dp[0]=1;
   dp[1]=1;
   dp[2]=2;
   for(int i=3;i<1000002;i++){
      dp[i]=dp[i-1]%1000000009+dp[i-2]
      %1000000009+dp[i-3]%1000000009;
      dp[i]%=1000000009;
   }
   
   int t; scanf("%d",&t);
   while(t--){
      int n; 
	  scanf("%d",&n);
      int dap=0;
      
      for(int i=0;i<=n;i+=3){
      	dap+=(n-i)/2; dap++;
	  }
      printf("%d\n",dap);
   }
   
   return 0;
}



