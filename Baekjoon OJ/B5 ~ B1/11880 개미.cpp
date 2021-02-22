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

#define TEST 0

using namespace std;
int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		vector<long long> v; for(int i=0;i<3;i++){
			long long x;scanf("%lld",&x);v.push_back(x);
		}sort(v.begin(),v.end());
		printf("%lld\n",(v[0]+v[1])*(v[0]+v[1])+v[2]*v[2]);
	}
    return 0;
}
