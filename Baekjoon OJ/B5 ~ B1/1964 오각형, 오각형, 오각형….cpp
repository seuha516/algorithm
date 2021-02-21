#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x; scanf("%d",&x);

	int t; int pastt=5;
	if(t==1){
		t=5;
	}else{
		for(int i=2;i<=x;i++){
			pastt+=(i%45678)*3+1;
			pastt%=45678;
		}
	}

	
	printf("%d",pastt);

	return 0;

}

