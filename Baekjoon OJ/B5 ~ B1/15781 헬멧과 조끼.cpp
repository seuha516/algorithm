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

using namespace std;


int main(){
	
	int a,b;scanf("%d %d",&a,&b);
	vector <int> x;
	vector <int> y;
	while(a--){
		int tt;scanf("%d",&tt);x.push_back(tt);
	}
	while(b--){
		int tt;scanf("%d",&tt);y.push_back(tt);
	}
	sort(x.begin(),x.end());sort(y.begin(),y.end());
   printf("%d",x[x.size()-1]+y[y.size()-1]);
	return 0;
}


