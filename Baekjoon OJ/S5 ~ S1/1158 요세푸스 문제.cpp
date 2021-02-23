#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int x; scanf("%d",&x);

	int y; scanf("%d",&y);
	
	int arr[6000]={0,};
	for(int i=1;i<=x;i++){
		arr[i]=i;
	}
	int soo=x;
	
	printf("<");
	int t=0;
	while(x){
		t+=y;
		t%=x;
		if(t==0){
			t=x;
		}
		
		if(soo==x){
			printf("%d",arr[t]);
		}else{
			printf(", %d",arr[t]);
		}
		arr[t]=10000;
		
		sort(arr+1,arr+x+1);
		x--;
		t--;
		
	}
	printf(">");
	
    return 0;
}

