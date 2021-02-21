#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}
int rev(int a){
	int x,y,z,zz;
	if(a<10){
		return a;
	}else if(a<100){
		x=a/10;
		y=a%10;
		return 10*y+x;
	}else if(a<1000){
		x=a/100;
		y=(a%100)/10;
		z=a%10;
		return 100*z+10*y+x;
	}else{
		x=a/1000;
		y=(a%1000)/100;
		z=(a%100)/10;
		zz=a%10;
		return 1000*zz+100*z+10*y+x;
	}
}
int jarihap(int a){
	return(a%100000/10000+a%10000/1000+a%1000/100+a%100/10+a%10);
}



int main(){
	
	int x,y; scanf("%d %d",&x,&y);
	
	int t=x+y;
	if(t%2==0&&y<=x){
		int a=t/2; int b=abs(x-a);
		printf("%d %d",max(a,b),min(a,b));
	}else{
		printf("-1");
	}

	

}

