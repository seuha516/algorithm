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

int main(){
	
	int t;scanf("%d",&t);
	

	while(t--){
		
		int n;scanf("%d",&n);
		string str1; int m=0;
		
		while(n--){
			char c[100]; int b; scanf("%s %d",c,&b);
			if(b>m){
				m=b; str1=c;
			}
		}
		printf("%s\n",str1.c_str());		
	}
	
	return 0;
}


