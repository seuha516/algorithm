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
#include <stack>

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	
	int t=3; int cnt=0;
	while(1){
		t=t+t+cnt+4;
		cnt++;
		if(t>=n)break;
	}
	int mid=cnt+3;
	
	int idx=n;
	
	while(1){
		mid=cnt+3;
		if(cnt==0){
			if(idx==1){
				printf("m");return 0;
			}else if(idx==2){
				printf("o");return 0;
			}else{
				printf("o");return 0;
			}
		}
		
		if(idx<=((t-mid)/2)){
			
		}else if(idx<=((t-mid)/2)+mid){
			if(idx==((t-mid)/2)+1){
				printf("m");return 0;
			}else{
				printf("o");return 0;
			}
		}else{
			idx-=(((t-mid)/2)+mid);
		}
		
		
		t=(t-mid)/2;
		cnt--;
	}	
	
return 0;}



