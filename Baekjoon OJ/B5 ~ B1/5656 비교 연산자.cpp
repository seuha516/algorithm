#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647

using namespace std;

int main(){
	
	int t=0;
	
	while(1){
		t++;
		int a,b; char c[3];
		
		scanf("%d %s %d",&a,c,&b);
		
		string s=c;
		
		bool dap;
		
		if(s==">"){
			dap=(a>b);
		}else if(s==">="){
			dap=(a>=b);
		}else if(s=="<"){
			dap=(a<b);
		}else if(s=="<="){
			dap=(a<=b);
		}else if(s=="=="){
			dap=(a==b);
		}else if(s=="!="){
			dap=(a!=b);
		}else{
			return 0;
		}
		printf("Case %d: ",t);
		if(dap){
			printf("true\n");
		}else{
			printf("false\n");
		}				
	}
	return 0;	
}

