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

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,k; scanf("%d %d",&n,&k);
		bool ok[1005]={0,};
		
		for(int i=k+1;i<=n;i++) ok[i]=1;
		for(int i=k-1;i>=(k+1)/2;i--) ok[i]=1;
				
		int dap=0;
		for(int i=1;i<=n;i++){
			if(ok[i]) dap++;
		}
		printf("%d\n",dap);
		for(int i=1;i<=n;i++){
			if(ok[i]) printf("%d ",i);
		}
		printf("\n");
	}
	
	return 0;
}

