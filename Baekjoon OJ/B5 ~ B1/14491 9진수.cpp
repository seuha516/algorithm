#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int main() {
	
	vector <int> v;
	
	int a; scanf("%d",&a);
	while(a){
		v.push_back(a%9); a/=9;
	}
	
	for(int i=v.size()-1;i>-1;i--){
		printf("%d",v[i]);
	}
	
	return 0;
}
