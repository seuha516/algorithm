#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;


int main() {

	int arr[10000]={0,};
	int rarr[10000]={0,};
	for(int i=1;i<10000;i++){
        arr[i]=(i+1)*(i+1)+i*i;
        rarr[i]=rarr[i-1]+arr[i];
	}
	for(int i=1;i<10000;i++){
        rarr[i]++;
	}
	int x;scanf("%d",&x);
	if(x==1){
        printf("1");
	}else{
	    int t=1;
        while(rarr[t]<=x){
            t++;
        }
        printf("%d",t);
	}

	return 0;
}

