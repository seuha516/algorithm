#include <stdio.h>
#include <stdlib.h>
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

int main(){
	
	int t=0;
	int ma=0;

    for(int i=0;i<10;i++){
    	int x,y;
		scanf("%d %d",&x,&y);
		t-=x;t+=y;ma=max(ma,t);
	}
	printf("%d",ma);
	
    return 0;
}

