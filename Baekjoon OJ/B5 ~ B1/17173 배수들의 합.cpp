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
	int a,b; scanf("%d %d",&a,&b);
	vector <int> v;
	while(b--){
		int x;scanf("%d",&x); v.push_back(x);
	}
	int dap=0;
	for(int i=1;i<=a;i++){
		for(int j=0;j<v.size();j++){
			if(i%v[j]==0){
				dap+=i; break;
			}
		}
	}
	printf("%d",dap);
	return 0;
}
