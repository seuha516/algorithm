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
	int arr[500][500]={0,};
	for(int i=0;i<n;i++){
		string s; cin >> s; getchar();
		for(int j=0;j<m;j++){
			if(s[j]=='.') arr[i][j]=0;
			else arr[i][j]=1;
		}
	}
	int dap=0;
	
	int temp=0;
	for(int i=0;i<n;i++){
		int t=0;
		for(int j=0;j<m;j++){
			if(arr[i][j]==1) t=1;
		}
		temp+=t;
	}
	dap=max(dap,n-temp);
	
	temp=0;
	for(int i=0;i<m;i++){
		int t=0;
		for(int j=0;j<n;j++){
			if(arr[j][i]==1) t=1;
		}
		temp+=t;
	}
	dap=max(dap,m-temp);
	
	printf("%d",dap);
	
	return 0;
}

