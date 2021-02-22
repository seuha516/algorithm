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

int price[102];

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		
		int p;scanf("%d",&p);
		int maxp=0; 
		string str1; char name[100]={0,};
		
		for(int i=0;i<p;i++){
			scanf("%d %s",&price[i],name);
			if(price[i]>maxp){
				maxp=price[i];
				str1=name;
			}
		}
		printf("%s\n",str1.c_str());
	}

	return 0;
}



