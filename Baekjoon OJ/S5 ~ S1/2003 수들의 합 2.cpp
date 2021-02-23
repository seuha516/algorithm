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

int arr[10002];


int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",arr+i);
	}
	int st,end; st=1; end=1;
	
	int hap=arr[1];
	int dap=0;
	while(1){
		
		if(hap==m){
			dap++; end++; hap-=arr[st]; st++; hap+=arr[end]; 
		}else if(hap<m){
			end++; hap+=arr[end];
		}else{
			hap-=arr[st]; st++;
		}
		
		while(st>end){
			end++; hap+=arr[end];
		}		
		
		if(end>n) break;
	}
	printf("%d",dap);
	
	return 0;
	
}
