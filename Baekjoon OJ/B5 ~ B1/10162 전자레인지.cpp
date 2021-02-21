#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x;scanf("%d",&x);
	
	if(x%10!=0){
		printf("-1");
	}else{
		printf("%d ",x/300);
		x%=300;
		printf("%d ",x/60);
		x%=60;
		printf("%d",x/10);
	}

}

