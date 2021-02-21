#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int jari(int a){
	int n=0;
	while(a){
		a/=10;n++;
	}
	return n;
}

int main() {
	
	while(1){
		int t;
		scanf("%d",&t);
		if(t==0){
			break;
		}
		int dap=0;
		dap+=jari(t)+1;
		
		int k=jari(t);
		int aa=t;
		
		for(int i=0;i<k;i++){
			int kk=aa%10;
			//printf("kk:%d\n",kk);
			if(kk==0){
				dap+=4;
			}else if(kk==1){
				dap+=2;
			}else{
				dap+=3;
			}
			aa/=10;
			
		}
		printf("%d\n",dap);
	}
	return 0;
}
