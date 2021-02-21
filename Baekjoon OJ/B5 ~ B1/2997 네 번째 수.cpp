#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int arr[3]={0};
	for(int i=0;i<3;i++){
		scanf("%d",arr+i);
	}
	sort(arr,arr+3);
	int d1=arr[1]-arr[0]; int d2=arr[2]-arr[1];
	if(d1==d2){
		printf("%d",d1+arr[2]);
	}else if(d1>d2){
		printf("%d",d2+arr[0]);	
	}else if(d1<d2){
		printf("%d",d1+arr[1]);	
	}
	

	return 0;

}

