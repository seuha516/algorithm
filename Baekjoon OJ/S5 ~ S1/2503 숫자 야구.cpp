#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int st(int a,int b){
	int ret=0;
	if(a%10==b%10) ret++;
	if((a/10)%10==(b/10)%10) ret++;
	if(a/100==b/100) ret++;
	return ret;
}

int ba(int a,int b){
	int ret=0;
	if((a/100)==(b/10)%10 || a/100==b%10) ret++;
	if((a/10)%10==b/100 || (a/10)%10==b%10) ret++;
	if(a%10==b/100 || a%10==(b/10)%10)ret++;
	return ret;
}


int main(){
	
	bool ok[1005]={0,};
	
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(i==j)continue;
			for(int k=1;k<=9;k++){
				if(i==k || j==k) continue;
				ok[i*100+j*10+k]=1;
			}
		}
	}
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int x,strike,ball; scanf("%d %d %d",&x,&strike,&ball);
		for(int i=100;i<=999;i++){
			if(st(x,i)==strike && ba(x,i)==ball){
			}else{
				ok[i]=0;
			}
		}
	}
	
	int dap=0;
	for(int i=0;i<1004;i++){
		if(ok[i]){
		 dap++;
		}
	}
	printf("%d",dap);
	
	return 0;
}



