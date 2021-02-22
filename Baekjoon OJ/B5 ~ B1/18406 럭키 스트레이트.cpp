#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define TEST 1

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	vector<int> v;
	while(n){
		v.push_back(n%10);n/=10;
	}
	int o=1; int t=0;
	for(int i=0;i<v.size()/2;i++){
		t+=(v[i]-v[v.size()-1-i]);
	}
	if(t==0)printf("LUCKY");
	else printf("READY");
	
    return 0;
}
