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

int n,u,r,d,l; 
bool go(int t1,int t2,int t3,int t4){
	int U=u-t1-t2, R=r-t2-t4, D=d-t3-t4, L=l-t1-t3;
	if(U<0||R<0||D<0||L<0||U>n-2||R>n-2||L>n-2||D>n-2) return 0;
	return 1;	
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		scanf("%d %d %d %d %d",&n,&u,&r,&d,&l);	
		bool dap=0;
		dap=dap|go(0,0,0,0);
		dap=dap|go(0,0,0,1);
		dap=dap|go(0,0,1,0);
		dap=dap|go(0,0,1,1);
		dap=dap|go(0,1,0,0);
		dap=dap|go(0,1,0,1);
		dap=dap|go(0,1,1,0);
		dap=dap|go(0,1,1,1);
		dap=dap|go(1,0,0,0);
		dap=dap|go(1,0,0,1);
		dap=dap|go(1,0,1,0);
		dap=dap|go(1,0,1,1);
		dap=dap|go(1,1,0,0);
		dap=dap|go(1,1,0,1);
		dap=dap|go(1,1,1,0);
		dap=dap|go(1,1,1,1);
		if(dap) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}

