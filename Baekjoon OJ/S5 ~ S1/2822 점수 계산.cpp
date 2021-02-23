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

using namespace std;

int main(){
	
	vector <pair<int,int> > v;
	vector <int> vv;

	for(int i=1;i<=8;i++){
		int a;scanf("%d",&a);
		v.push_back(pair<int,int>(a,i));
	}
	sort(v.begin(),v.end());
	int d=0;
	for(int i=7;i>=3;i--){
		vv.push_back(v[i].second);
		d+=v[i].first;
	}
	sort(vv.begin(),vv.end());
	printf("%d\n%d %d %d %d %d",d,vv[0],vv[1],vv[2],vv[3],vv[4]);

	return 0;
}


