#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

int DP[1005][1005];

int main(){
	int TC; scanf("%d",&TC);
	while(TC--){
		memset(DP,0,sizeof(DP));
		int n,k; scanf("%d %d",&n,&k);
		
		for(int i=0;i<1005;i++){
			DP[0][i]=1;
			DP[i][1]=1;
		}
		for(int i=2;i<=k;i++){
			int acc=1;
			for(int j=1;j<=n;j++){
				acc+=DP[n-j][i-1]; acc%=1000000007;
				DP[j][i]=acc;
			}
		}
		printf("%d\n",DP[n][k]);		
	}
	
	return 0;
}





















