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

int main(){
	
	int list[10]={31599,4681,29671,29647,23497,31183,31215,29257,31727,31695};
	
	char c[5][40]={0,};
	int n;scanf("%d",&n);
	for(int i=0;i<5;i++){
		scanf("%s",&c[i]);
	}
	
	
	double dap=0;
	int err=0;
	
	
	for(int i=0;i<n;i++){

		dap*=10;

		int decode=0;
		
		for(int j=0;j<5;j++){
			for(int k=4*i;k<4*i+3;k++){
				decode*=2;
				if(c[j][k]=='#') decode++;
			}
			if(i!=n-1){
				if(c[j][4*i+3]=='#'){
					printf("-1"); return 0;
				}
			}
		}
		
		int d=0; int count=0;
		
		for(int j=0;j<10;j++){
			int x=list[j]|decode;
			if(x==list[j]){
				d+=j; count++;
			}
			int a=decode|1024;
			int b=decode|16;
			if(a==decode || b==decode){
			printf("-1"); return 0;
			}
		}
		double res=d/(float)count;
		dap+=res;
	}
	printf("%lf",dap);

	return 0;
}


