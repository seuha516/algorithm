#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    char c[10]={0};
    scanf("%s",c);
    int an=0;
    for(int i=0;c[i]!=0;i++){
    	an*=16;
    	int t;
		if(c[i]>64){
			t=c[i]-55;
		}else{
			t=c[i]-48;
		}
		an+=t;
	}
    printf("%d",an);
    
    
    return 0; 
}

