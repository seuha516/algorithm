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
	
	char in1[324]={0,};  char in2[324]={0,};
	scanf("%s",in1);
	scanf("%s",in2);
	
	char d[1545]={0,}; char temp[1545]={0,};
	int dap[1545]={0,};
	
	for(int i=0;i<strlen(in1);i++){
		d[strlen(in1)-1-i]=in1[i];
	}
	for(int i=0;i<strlen(in2);i++){
		temp[strlen(in2)-1-i]=in2[i];
	}
	
	for(int i=0;i<strlen(in2);i++){
		if(temp[i]==49){
			for(int j=0;j<strlen(in1);j++){
				dap[i+j]+=d[j]-48;
			}
		}
	}
	
	for(int i=0;i<strlen(in2)+strlen(in1)-1;i++){
		if(dap[i]>=2){
			dap[i+1]+=dap[i]/2;
			dap[i]%=2;
		}
	}
	int k=0;
	for(int i=1540;i>=0;i--){
		if(dap[i]==1) k=1;
		if(k){
			printf("%d",dap[i]);
		}
	}
	
	
	return 0;
}




