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

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	while(1){
		
		int arr[6]={0,};int hap=0;
		for(int i=0;i<6;i++){
			scanf("%d",arr+i);
		}sort(arr,arr+6);
		if(arr[0]==0&&arr[5]==0)break;
		
		for(int i=1;i<5;i++){
			hap+=arr[i];
		}
		
		if(hap%4==0){
			printf("%d\n",hap/4);
		}else if(hap%2==0){
			printf("%0.1lf\n",(double)hap/(double)4);
		}else{
			printf("%0.2lf\n",(double)hap/(double)4);
		}
		
	}
	
	
return 0;}



