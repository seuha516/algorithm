#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){
	
	int arr[3]={0};
	for(int i=0;i<3;i++){
		scanf("%d",arr+i);
	}
	printf("%d",max(arr[2]-arr[1],arr[1]-arr[0])-1);
	

	return 0;

}

