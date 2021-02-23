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

char heap[60][2];

void P1(int a){
	if(a<=-1)return;
	printf("%c",a);
	P1(heap[a-'A'][0]);
	P1(heap[a-'A'][1]);
	return;
}
void P2(int a){
	if(a<=-1)return;
	P2(heap[a-'A'][0]);
	printf("%c",a);	
	P2(heap[a-'A'][1]);
	return;
}
void P3(int a){
	if(a<=-1)return;
	P3(heap[a-'A'][0]);
	P3(heap[a-'A'][1]);
	printf("%c",a);
	return;
}

int main(){
	
	for(int i=0;i<60;i++){
		heap[i][0]=-1;
		heap[i][1]=-1;
	}
	
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		char a,b,c; getchar(); scanf("%c %c %c",&a,&b,&c);
		if(b!='.'){
			heap[a-'A'][0]=b;
		}else{
			heap[a-'A'][0]=-1;
		}
		if(c!='.'){
			heap[a-'A'][1]=c;
		}else{
			heap[a-'A'][1]=-1;
		}	
	}
	
	P1('A'); printf("\n");
	P2('A'); printf("\n");
	P3('A'); 
	
	
	return 0;
}



