#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int t=0;
	while(1){
	t++;
		int a,b,c;scanf("%d",&a);
		if(a==0){break;
		}scanf("%d",&b);scanf("%d",&c);
		b=b*b+c*c;
		a=a*a*4;
		if(a>=b){
			printf("Pizza %d fits on the table.\n",t);
		}else{
			printf("Pizza %d does not fit on the table.\n",t);
		}
	}
	return 0;

}

