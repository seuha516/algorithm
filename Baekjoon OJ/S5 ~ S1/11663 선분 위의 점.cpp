#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;


int main() {
	
	vector <double> v;
	int n,m; scanf("%d %d",&n,&m);
	while(n--){
		double x;scanf("%lf",&x);
		v.push_back(x);		
	}
	sort(v.begin(),v.end());
	
	while(m--){
		double a,b; scanf("%lf %lf",&a,&b); 
		if(a>b){
			swap(a,b);
		}
		a-=0.000001; b+=0.000001;
		vector<double>::iterator t1=lower_bound(v.begin(),v.end(),a);
		vector<double>::iterator t2=upper_bound(v.begin(),v.end(),b);
		printf("%d\n",t2-t1);
	}
	
	
	return 0;
	
}
