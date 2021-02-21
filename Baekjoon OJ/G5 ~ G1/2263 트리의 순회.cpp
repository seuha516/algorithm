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
#include <functional>

using namespace std;


int a[100002];
int b[100002];

void go(int ast,int aend,int bst,int bend){
	
	if(ast>aend)return;
	if(ast==aend){
		printf("%d ",a[ast]); return;
	}

	int t;
	for(int i=0;1;i++){
		if(a[ast+i]==b[bend]){
			t=i;
			break;
		}
	}
		
	go(ast+t,ast+t,bend,bend);
	go(ast,ast+t-1,bst,bst+t-1);
	go(ast+t+1,aend,bst+t,bend-1);
	
}

int main(){
	
	int n; scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(int i=0;i<n;i++){
		scanf("%d",b+i);
	}
	
	go(0,n-1,0,n-1);
	
	return 0;	
}


