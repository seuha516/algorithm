#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int heap[200005]={0,};
int heap_count;

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


int main(){
	
	int n; scanf("%d",&n);
	if(n==0) return 0;
	heap[0]=1;
	
	for(int i=0;i<n-1;i++){
		heap[i]=0;
		push(1); 
		heap[i+1]=i+2; 
		swap(heap[0],heap[i+1]);
	}
	for(int k=0;k<n;k++){
		printf("%d ",heap[k]);
	}
		
	return 0;
}
