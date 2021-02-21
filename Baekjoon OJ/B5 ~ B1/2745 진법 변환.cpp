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
	int dap=0;
	char c[100]={0,};int n;
	scanf("%s %d",&c,&n);
	
	for(int i=0;c[i]!=0;i++){
		dap*=n;
		int x=c[i];
		if(x>='A'&&x<='Z'){
			x=x-'A'+10;
		}else{
			x-=48;
		}
		dap+=x;
	}
	printf("%d",dap);
	return 0;
	
}

