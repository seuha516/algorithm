#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
#include <queue>
#include <map>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int arr[105]={0,};
		int n; ll u,v; scanf("%d %lld %lld",&n,&u,&v);
		for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
		}
		ll dap=0;
		
		int temp=0;
		for(int i=1;i<n;i++){
			temp=max(temp,max(arr[i],arr[i+1])-min(arr[i],arr[i+1]));
		}
		
		if(temp==0){
			dap=min(u+v,v+v);
		}else if(temp==1){
			dap=min(u,v);
		}else{
			dap=0;
		}
		printf("%lld\n",dap);
	}
	
	return 0;
}


