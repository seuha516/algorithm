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
#include <cstdlib>
#include <set>
#include <functional>
#include <random>

using namespace std;


int main(){
	
	vector<int>v;
	v.push_back(1); v.push_back(3);
	
	int n; scanf("%d",&n); 
	if(n%2==1)printf("0");
	else{
		n/=2;
		for(int i=2;i<=n;i++){
			int t=0;
			for(int j=0;j<=i-2;j++){
				t+=2*v[j];	
			}
			t+=v[i-1]*3;
			v.push_back(t);
		}
		printf("%d",v[n]);
	}
	
return 0;}




