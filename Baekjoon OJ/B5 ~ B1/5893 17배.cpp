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
	
	char c[1010]={0,};
	char creal[1010]={0,};
	int d[1010]={0,};
	
	scanf("%s",c);
	
	int t=0;
	for(int i=0;c[i]!=0;i++){
		t++;
	}
	
	for(int i=0;c[i]!=0;i++){
		d[i+6]=c[i]-48;
	}
	
	t+=9;
	

	for(int i=4;i<t;i++){
		d[i-4]+=d[i];
	}
	

	
	for(int i=t+1;i>0;i--){
		if(d[i]>=2){
			d[i-1]+=1; d[i]-=2;
		}
	}
	
	int o=0;
	for(int i=0;i<t-3;i++){
		if(d[i]==1){
			o=1;
		}
		if(o==1){
			printf("%d",d[i]);
		}
		
	}
		
	return 0;
}


