#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	n=n/100;
	n=n*100;
	for(int i=0;i<100;i++){
		if((n+i)%k==0){
			if(i<10){
				printf("0");
			}
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}
