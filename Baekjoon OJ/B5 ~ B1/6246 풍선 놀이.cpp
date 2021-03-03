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
	
	int n,q; scanf("%d %d",&n,&q);
	bool arr[10005]={0,};
	for(int i=0;i<q;i++){
		int x,y; scanf("%d %d",&x,&y); x--;
		for(int j=x;j<n;j+=y){
			arr[j]=1;
		}
	}
	int dap=0;
	for(int i=0;i<n;i++) if(!arr[i]) dap++;
	cout<<dap;
	
	return 0;
}

