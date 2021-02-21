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

int gcd(int a,int b){
	int w;
	while(b){
		w=a%b;
		a=b;
		b=w;
	}
	return a;
}

int main(){   
	
	int a,b; scanf("%d %d",&a,&b);
	int c=b/a;

	vector <int> v1;
	vector <int> v2;
	
	for(int i=1;i<=sqrt(c);i++){
		if(c%i==0){
			int aa=i; int bb=c/i;
			if(gcd(aa,bb)==1){
				v1.push_back(aa);
				v2.push_back(bb);		
			}
		}
	}
   	printf("%d %d",v1[v1.size()-1]*a,v2[v2.size()-1]*a);
 
   return 0;
}

