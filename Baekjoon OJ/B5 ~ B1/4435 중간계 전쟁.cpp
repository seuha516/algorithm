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

int main(){
	int cc=0;
	int t;scanf("%d",&t);
	while(t--){
		cc++;
		int arr[13];
		int oo[13]={1,2,3,3,4,10,1,2,2,2,3,5,10};
		for(int i=0;i<13;i++){
			scanf("%d",arr+i);
			arr[i]*=oo[i];
		}
		int t1=0; int t2=0;
		for(int i=0;i<=5;i++){
			t1+=arr[i];
		}
		for(int i=6;i<=12;i++){
			t2+=arr[i];
		}
		printf("Battle %d: ",cc);
		if(t1<t2){
			printf("Evil eradicates all trace of Good\n");
		}else if(t1>t2){
			printf("Good triumphs over Evil\n");
		}else{
			printf("No victor on this battle field\n");
		}		
	}
	return 0;
}


