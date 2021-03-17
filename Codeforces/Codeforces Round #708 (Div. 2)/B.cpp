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
		int n,m; scanf("%d %d",&n,&m);
		int arr[100005]={0,};
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); arr[x%m]++;
		}
		
		int dap=0;
		
		if(arr[0]!=0) dap++;
		if(m%2==0&&arr[m/2]!=0){
			dap++;
		}
		
		for(int i=1;i<=(m-1)/2;i++){
			int a=arr[i], b=arr[m-i];
			if(a>b) swap(a,b);
			
			if(a==0&&b==0) continue;
			
			b-=a;
			
			if(b<=1) dap+=1;
			else dap+=b;
		}
		printf("%d\n",dap);
		
				
		
	}
	
	return 0;
}




