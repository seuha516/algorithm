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

using namespace std;

int heap[200005]={0,};
int heap_count=0;

int check(int a, int b){
	
	if(heap[a]==0){
		return 0;
	}else if(heap[b]==0){
		return 1;
	}else{
		if(heap[a]<heap[b]){
			return 1;
		}else{
			return 0;
		}
	}
}

void push(int a){
	heap[heap_count]=a;
	
	int x=heap_count; int y=(heap_count-1)/2;
	
	while(x){
		if(check(x,y)){
			int w=heap[x];
			heap[x]=heap[y];
			heap[y]=w;
		}else{
			break;
		}
		x=y; y=(x-1)/2;
	}
	
	heap_count++;
}
void pop(){
	printf("%d\n",heap[0]);
	heap[0]=heap[--heap_count];
	heap[heap_count]=0;
	if(heap_count<0){
		heap_count=0;
	}
	
	int a=1; int b=2;
	
	while(heap[a]&&(check(a,(a-1)/2)||check(b,(b-1)/2))){
		if(check(a,b)){
			int w=heap[a];
			heap[a]=heap[(a-1)/2];
			heap[(a-1)/2]=w;
			int t=a;
			a=t*2+1; b=t*2+2;
		}else{
			int w=heap[b];
			heap[b]=heap[(b-1)/2];
			heap[(b-1)/2]=w;
			int t=b;
			a=t*2+1; b=t*2+2;
		}
	}
}


int main() {
	
	int n; scanf("%d",&n);
	
	while(n--){
		int a;
		scanf("%d",&a);
		
		if(a){
			push(a);
		}else{
			pop();
		}	
	}
	
	return 0;
}
