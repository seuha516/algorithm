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
	
	int dap; scanf("%d",&dap);
	while(1){
		char c; getchar(); scanf("%c",&c); 
		if(c=='=') break;
		int d; scanf("%d",&d);
		
		if(c=='+') dap+=d;
		if(c=='-') dap-=d;
		if(c=='*') dap*=d;
		if(c=='/') dap/=d;
		
	}
	printf("%d",dap);
	
	
	return 0;
}



















