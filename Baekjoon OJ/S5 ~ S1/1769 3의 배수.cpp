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

int jari(long long a){
   int n=0;
   while(a){
      a/=10;n++;
   }
   return n;
}
int main(){

	char c[1000002]={0,};
	scanf("%s",c);
	
	int hap=0;
	for(int i=0;c[i]!=0;i++){
		hap+=c[i]-48;
	}
		
	int dap=1;
	if(jari(hap)==1)dap--;
	
	while(jari(hap)>1){
		int temp=0;
		while(hap){
			temp+=hap%10;
			hap/=10;
		}
		hap=temp;
		dap++;
	}
	
	printf("%d\n",dap);
	if(hap%3==0){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;	
}

