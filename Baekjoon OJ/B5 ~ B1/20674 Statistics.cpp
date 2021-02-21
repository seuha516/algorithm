#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647

using namespace std;

int arr[200005];

int main(){
	
	int n; scanf("%d",&n);
	vector<int> v;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}
	
	int m=v[0]; int dap=0;
	for(int i=1;i<n;i++){
		if(v[i]>m){
			dap+=v[i]-m;
		}else{
			m=v[i];
		}
	}
	printf("%d",dap);
	
	return 0;	
}

