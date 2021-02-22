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
	
	char c[100]={0,};
	scanf("%s",c);
	
	int dap=0;
	if(c[1]=='x'){
		for(int i=2;c[i]!=0;i++){
			dap*=16;
			if(c[i]>='a'&&c[i]<='z'){
				dap+=c[i]-'a'+10;
			}else{
				dap+=c[i]-48;
			}
		}
		
		
	}else if(c[0]=='0'){
		for(int i=1;c[i]!=0;i++){
			dap*=8;
			dap+=c[i]-48;
		}
	}else{
		for(int i=0;c[i]!=0;i++){
			dap*=10;
			dap+=c[i]-48;
		}
	}
	printf("%d",dap);
	return 0;
	
}


