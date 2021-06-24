#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;


int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	vector<int> v;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}
	
	for(int i=0;i<m;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a==1){
			v[b-1]=c;
		}else if(a==2){
			for(int j=b-1;j<=c-1;j++) v[j]=1-v[j];
		}else if(a==3){
			for(int j=b-1;j<=c-1;j++) v[j]=0;
		}else{
			for(int j=b-1;j<=c-1;j++) v[j]=1;
		}
	}
	for(int i=0;i<n;i++) printf("%d ",v[i]);
	
	return 0;
}












