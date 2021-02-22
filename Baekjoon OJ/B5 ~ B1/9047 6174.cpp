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

#define TEST 0
#define intmax 2147483647

using namespace std;

int go(int x){
	vector<int> v;
	v.push_back(x%10); x/=10;
	v.push_back(x%10); x/=10;
	v.push_back(x%10); x/=10;
	v.push_back(x%10);
	sort(v.begin(),v.end());
	int x1=v[0]*1000+v[1]*100+v[2]*10+v[3];
	int x2=v[3]*1000+v[2]*100+v[1]*10+v[0];
	return x2-x1;
}

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		int x; scanf("%d",&x);
		for(int i=0;1;i++){
			if(x==6174){
				printf("%d\n",i); break;
			}
			x=go(x);
		}
	}
	
	
}
