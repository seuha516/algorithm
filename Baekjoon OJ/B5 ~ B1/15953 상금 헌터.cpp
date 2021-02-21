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
	
	int t;scanf("%d",&t);
	
	while(t--){
		
		int a,b;scanf("%d %d",&a,&b);
		int dap=0;
		
		if(a==0){
			
		}else if(a<=1){
			dap+=5000000;
		}else if(a<=3){
			dap+=3000000;
		}else if(a<=6){
			dap+=2000000;
		}else if(a<=10){
			dap+=500000;
		}else if(a<=15){
			dap+=300000;
		}else if(a<=21){
			dap+=100000;
		}
		if(b==0){
			
		}else if(b<=1){
			dap+=5120000;
		}else if(b<=3){
			dap+=2560000;
		}else if(b<=7){
			dap+=1280000;
		}else if(b<=15){
			dap+=640000;
		}else if(b<=31){
			dap+=320000;
		}
		printf("%d\n",dap);
		
	}
	
	
	return 0;
}

