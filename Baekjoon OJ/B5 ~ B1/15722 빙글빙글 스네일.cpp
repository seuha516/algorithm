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
	
	int count=0,a=0,b=0; int n;scanf("%d",&n);
	
	int lev=1;
	
	while(1){
		for(int i=0;i<lev;i++){
			b++; count++;
			if(count==n){
				printf("%d %d",a,b);return 0;
			}
		}
		for(int i=0;i<lev;i++){
			a++; count++;
			if(count==n){
				printf("%d %d",a,b);return 0;
			}
		}
		lev++;
		for(int i=0;i<lev;i++){
			b--; count++;
			if(count==n){
				printf("%d %d",a,b);return 0;
			}
		}
		for(int i=0;i<lev;i++){
			a--; count++;
			if(count==n){
				printf("%d %d",a,b);return 0;
			}
		}
		lev++;
	}
	
	return 0;
}

