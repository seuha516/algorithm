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
	
	char c[55]={0,};
	scanf("%s",c);
	
	int past=c[0]; int dap=10;
	 
	for(int i=1;c[i]!=0;i++){
		if(c[i]!=past){
			dap+=10;
		}else{
			dap+=5;
		}
		past=c[i];
	}
	printf("%d",dap);
	
	return 0;
}


