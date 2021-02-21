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
   
   int n;scanf("%d",&n);
   
   int dp[2][3]; int dp2[2][3];
   
   for(int tt=0;tt<n;tt++){
   	
   		int a,b,c; scanf("%d %d %d",&a,&b,&c);
   		if(tt==0){
   			dp[0][0]=a;	dp[0][1]=b;	dp[0][2]=c;	
   			dp2[0][0]=a;	dp2[0][1]=b;	dp2[0][2]=c;	
		}else{
			int i=tt%2;
			
			dp[i][0]=max(dp[1-i][0],dp[1-i][1])+a;
			dp[i][1]=max(dp[1-i][0],max(dp[1-i][1],dp[1-i][2]))+b;
			dp[i][2]=max(dp[1-i][1],dp[1-i][2])+c;
			
			dp2[i][0]=min(dp2[1-i][0],dp2[1-i][1])+a;
			dp2[i][1]=min(dp2[1-i][0],min(dp2[1-i][1],dp2[1-i][2]))+b;
			dp2[i][2]=min(dp2[1-i][1],dp2[1-i][2])+c;
			
		}
   }
 	
 	n=1-(n%2)+1;
 	
 	printf("%d %d",
	 max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2])),
	 min(dp2[n-1][0],min(dp2[n-1][1],dp2[n-1][2]))
	 );
   
   return 0;
}



