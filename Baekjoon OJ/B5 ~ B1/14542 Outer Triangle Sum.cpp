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
#include <stack>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	int tt=0;
	while(1){tt++;
		int t;scanf("%d",&t);if(t==0)break;
		int dap=0;
		for(int i=1;i<t+1;i++){
			vector <int> v; int h=0;
			for(int j=0;j<i;j++){
				int x;scanf("%d",&x);v.push_back(x);h+=x;
			}
			if(i==1){
				dap+=v[0];
			}else if(i==t){
				dap+=h;
			}else{
				dap+=v[0]+v[v.size()-1];
				
			}
		}
	printf("Case #%d:%d\n",tt,dap);
	}
return 0;}

