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
using namespace std;

int main(){	

	long long int d=0; long long int dap=0; long long int chon=0; long long int hak=0;
	char cc[272]={0,};
	char cccc[5]={0,}; 
		
	int t; scanf("%d",&t); 
	
	while(t--){
		cccc[0]=0; cccc[1]=0;
		d=0;
				
		scanf("%s %d %s",cc,&hak,cccc);

		if(cccc[0]=='A'){
			d=40;
		}else if(cccc[0]=='B'){
			d=30;
		}else if(cccc[0]=='C'){
			d=20;
		}else if(cccc[0]=='D'){
			d=10;
		}else{
			d=0;
		}
	
		if(cccc[1]=='+'){
			d+=3;
		}else if(cccc[1]=='0'){
			
		}else if(cccc[1]=='-'){
			d-=3;
		}
		chon+=hak;
		dap+=hak*d;
	}
	long long int a=dap*10000; long long int b=chon;
	long long int c=a/b;
	
	
	if(c%1000>499){
		c+=1000;
	}
	
	printf("%lld.%lld%lld",c/100000,(c/10000)%10,(c/1000)%10);
	
	return 0;

}

