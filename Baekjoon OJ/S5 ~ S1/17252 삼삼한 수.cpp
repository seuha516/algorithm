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
using namespace std;

int main(){
	
	vector<int> v;
	
	int x=1;
	for(int i=0;i<20;i++){
		v.push_back(x);
		x*=3;
	}
	
	int n; scanf("%d",&n); 
	if(n==0){
		printf("NO"); return 0;
	}
	
	for(int i=19;i>=0;i--){
		if(n>=v[i])n-=v[i];
	}
	
	if(n==0)printf("YES");
	else printf("NO");
	
	return 0;	
}














