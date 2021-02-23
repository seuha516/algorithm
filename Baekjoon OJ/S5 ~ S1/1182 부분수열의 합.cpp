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

int nn,ss; int aaa[25];
int dap;
void go(int x,int hap,int ok){
	if(x==nn){		
		if(hap==ss&&ok>=1){
		dap++;
		}return;
	}
	go(x+1,hap,ok);
	go(x+1,hap+aaa[x],ok+1);
}

int main(){
	
	scanf("%d %d",&nn,&ss);
	for(int i=0;i<nn;i++){
		scanf("%d",aaa+i);
	}
	go(0,0,0);
	
	printf("%d",dap);
	
	return 0;
	
}



