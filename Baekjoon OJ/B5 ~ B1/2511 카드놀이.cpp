#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    int a[10];int b[10];int t=0; int tt=0;
    for(int i=0;i<10;i++){
    	scanf("%d",a+i);
	}
	for(int i=0;i<10;i++){
    	scanf("%d",b+i);
	}
	int w=0;
	for(int i=0;i<10;i++){
    	if(a[i]>b[i]){
    		t+=3;w=1;
		}else if(a[i]<b[i]){
			tt+=3;w=2;
		}else{
			t+=1;tt+=1;
		}
	}
   	printf("%d %d\n",t,tt);
   	if(t>tt){
   		printf("A");
	   }else if(t==tt){
	   	if(w==0){
	   		printf("D");
		}else if(w==1){
			printf("A");
		}else{
			printf("B");
		}
	   
	   }else{
	   	printf("B");
	   }
   
    return 0; 
}

