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

template <typename T>
T gcd(T a, T b){  
	return a%b==0? b : gcd(b,a%b);
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		vector<int> v;
		int n; scanf("%d",&n);
		
		int even=0;
		int dap=0;
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); 
			if(x%2==0) even++;
			else if(x!=1) v.push_back(x); 
		}
		dap+=((n-1)+(n-even))*even/2;
		
		int size=v.size();
		for(int i=0;i<size-1;i++){
			for(int j=i+1;j<size;j++){
				if(gcd(v[i],v[j])>1) dap++;
			}
		}
		printf("%d\n",dap);
		
	}
	
	return 0;
}

