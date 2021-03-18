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
		
		vector<ll> C;
		
		ll n; scanf("%lld",&n);
		for(int i=0;i<n;i++){
			ll x; scanf("%lld",&x); C.push_back(x); 
		}
		
		ll dap=n*C[0]+n*C[1];
		
		ll mx=C[0], my=C[1];
		ll xhap=C[0], yhap=C[1];
		
		for(int i=2;i<n;i++){
		//	printf("\nC[0]~C[%d]\n",i);
			if(i%2==0){
				mx=min(mx,C[i]); xhap+=C[i];
			}else{
				my=min(my,C[i]); yhap+=C[i];
			}
			ll xnum=(ll)((i/2)+1), ynum=(ll)((i+1)/2);
			ll temp=(xhap-mx)+(n-(xnum-1))*mx + (yhap-my)+(n-(ynum-1))*my;
			dap=min(dap,temp);
			
		//	printf("x개수 %lld, y개수 %lld\n",xnum,ynum);
		//	printf("x최소 %lld, y최소 %lld\n",mx,my);
		//	printf("결과 >> %lld\n",temp);
			
			
			
		}
		printf("%lld\n",dap);
				
		
	}
	
	return 0;
}











