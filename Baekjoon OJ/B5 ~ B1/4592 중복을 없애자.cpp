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

using namespace std;

int main(){
	while(1){
		int n;scanf("%d",&n);if(n==0)break;
		vector <int> v;for(int i=0;i<n;i++){
			int x;scanf("%d",&x);v.push_back(x);
		}
		bool ok[150]={0,};
		for(int i=0;i<v.size();i++){
			if(!ok[v[i]]){
				printf("%d ",v[i]);
				for(int i=0;i<105;i++)ok[i]=0; 
				ok[v[i]]=1;
			}
		}printf("$\n");
	}
	return 0;
}




