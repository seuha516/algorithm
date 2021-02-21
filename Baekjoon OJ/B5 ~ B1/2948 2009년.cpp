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
	
	int arr[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
	int m,d;scanf("%d %d",&d,&m);
	
	int t=arr[m]+d;
	t%=7;
	
	if(t==1){
		printf("Thursday");
	}else if(t==2){
			printf("Friday");
	}else if(t==3){
			printf("Saturday");
	}else if(t==4){
			printf("Sunday");
	}else if(t==5){
			printf("Monday");
	}else if(t==6){
			printf("Tuesday");
	}else if(t==0){
			printf("Wednesday");
	}
	return 0;
}



