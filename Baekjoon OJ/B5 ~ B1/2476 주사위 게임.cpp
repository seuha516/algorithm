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

int min(int a,int b){
   if(a>b){
      return b;
   }else return a;
}
int max(int a,int b){
   if(a<b){
      return b;
   }else return a;
}

int main(){
	
	int n;scanf("%d",&n);
	
	int dap=0;
	
	while(n--){
		
		int a,b,c,d; scanf("%d %d %d",&a,&b,&c); int t; d=-1;
		
		if(a==b&&b==c&&c==d){
			t=50000+a*5000;
		}else if((a==b&&b==c)||(a==b&&b==d)||(a==d&&d==c)){
			t=10000+a*1000;
		}else if((d==b&&b==c)){
			t=10000+b*1000;
		}else if(a==b&&c==d){
			t=2000+a*500+c*500;	
		}else if(a==c&&b==d){
			t=2000+a*500+d*500;	
		}else if(a==d&&b==c){
			t=2000+a*500+b*500;	
		}else if(a==b||a==c||a==d){
			t=1000+a*100;
		}else if(b==c||b==d){
			t=1000+b*100;
		}else if(c==d){
			t=1000+c*100;
		}else{
			t=max(a,max(b,max(c,d)))*100;
		}
		
		dap=max(dap,t);
		
	}
	printf("%d",dap);

	return 0;
}


