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

int arr[1005][1005];

int main(){
	
	int t1=-1,t2=-1,t3=-1,t4=-1;
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1){
				if(t1==-1){
					t1=i;t2=j;
				}else{
					t3=i;t4=j;
				}
			}
		}
	}
	cout<<abs(t1-t3)+abs(t2-t4);
	
	return 0;
}

