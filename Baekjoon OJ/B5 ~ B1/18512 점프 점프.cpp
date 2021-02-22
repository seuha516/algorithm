#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int arr[100000]={0,};
int main(){
	
	int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
	
	for(int i=c;i<100000;i+=a){
		arr[i]++;
	}for(int i=d;i<100000;i+=b){
		arr[i]++;
	
	}
	int dap=0;
	for (int i=0;i<100000;i++){
		if(arr[i]==2){
			printf("%d",i);
			return 0;
		}
	}
	printf("%d",-1);
	
	return 0;
}
