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
#include <random>

using namespace std;

int main(){
	
	while(1){
		
		int tk;scanf("%d",&tk);if(tk==-1)break;
		int d=0; int past=0;
		for(int i=0;i<tk;i++){
			int a,b;scanf("%d %d",&a,&b);
			d+=a*(b-past);
			past=b;			
		}
		printf("%d miles\n",d);
		
	}
	
return 0;}


