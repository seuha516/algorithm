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

int main(){
	
	vector <int> v; int hap=0;
	for(int i=0;i<10;i++){
		int x;scanf("%d",&x);hap+=x;v.push_back(hap);
	}
	int dis=1<<30; int dap=0;
	for(int i=0;i<10;i++){
		if(dis>=abs(v[i]-100)){
			dis=abs(v[i]-100);
			dap=v[i];
		}
	}
	printf("%d",dap);
	
	return 0;
	
}
