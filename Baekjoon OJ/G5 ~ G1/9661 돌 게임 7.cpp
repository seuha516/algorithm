#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
   long long int a; scanf("%lld",&a);
	if(a==2){
		printf("CY");
	}else if(a<=3){
		printf("SK");
	}else{
		int t=a%5;
		if(t==1||t==3||t==4){
			printf("SK");
		}else{
			printf("CY");
		}
	}

    return 0;
}

