#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>

using namespace std;

int arr[100005];

void go(int st,int end){
	if(st>=end) return;
	
	int fir=arr[st]; 
	
	int i;
	for(i=st;arr[i]<=arr[st]&&i<=end;i++){}
	go(st+1,i-1);
	go(i,end);
	
	for(int i=st+1;i<=end;i++){
		arr[i-1]=arr[i];
	}
	arr[end]=fir;
	
	
}


int main(){
	
	int d; int cnt=0;
	while(scanf("%d",&d)!=EOF){
		arr[cnt++]=d;
	}
	go(0,cnt-1);
	
	for(int i=0;i<cnt;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}


