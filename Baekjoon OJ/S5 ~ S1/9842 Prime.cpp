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
#define LIMIT 1000000

using namespace std;

vector<int> sosu_list;
int sosu_gaesoo;
void sosu_making(){
	bool ok[LIMIT]={0,};
	for(int i=2;i<=LIMIT;i++){
		if(ok[i])continue;
		sosu_list.push_back(i);
		for(int j=i;j<=LIMIT;j+=i){
			ok[j]=1;
		}
	}
	sosu_gaesoo=sosu_list.size();
}

int main(){
	
	sosu_making();
	
	int x; cin >> x;
	cout << sosu_list[x-1];
	
	return 0;	
}




