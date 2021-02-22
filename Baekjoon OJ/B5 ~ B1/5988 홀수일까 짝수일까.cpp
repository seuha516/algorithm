#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
	
	int x;scanf("%d",&x);
    while(x--){
    	char c[100]={0};scanf("%s",c);
    	int t=0;
    	for(int i=0;c[i]!=0;i++){
    		t=i;
		}
		int tt=c[t]-48;
    	if(tt%2==0){printf("even\n");
		}else{
			printf("odd\n");
		}
	}
    
    return 0; 
}

