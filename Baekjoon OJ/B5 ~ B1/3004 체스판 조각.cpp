#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x;scanf("%d",&x);
	
	if(x%2==0){
		printf("%d",(x/2+1)*(x/2+1));
	}else{
		x++;
		printf("%d",((x+1)/2)*((x+1)/2+1)
		);
	}

}

