#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x,y,z;scanf("%d %d %d",&x,&y,&z);
	
	if(x+y+z!=180){
		printf("Error");
	}else if(x==y&&y==z&&x==60){
		printf("Equilateral");
	}else if(x!=y&&y!=z&&z!=x){
		printf("Scalene");
	}else{
		printf("Isosceles");
	}
	

}

