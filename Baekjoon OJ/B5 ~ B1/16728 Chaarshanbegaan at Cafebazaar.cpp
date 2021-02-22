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
    
    int t=0;
    
    for(int i=0;i<x;i++){
    	int a,b;scanf("%d %d",&a,&b);
    	int te=a*a+b*b;
    	if(te<=100){
    		t+=10;
		}else if(te<=900){
    		t+=9;
		}else if(te<=2500){
    		t+=8;
		}else if(te<=4900){
    		t+=7;
		}else if(te<=8100){
    		t+=6;
		}else if(te<=12100){
    		t+=5;
		}else if(te<=16900){
    		t+=4;
		}else if(te<=22500){
    		t+=3;
		}else if(te<=28900){
    		t+=2;
		}else if(te<=36100){
    		t+=1;
		}else{
    		t+=0;
		}
	}
	
	printf("%d",t);
    
    return 0; 
}

