#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int arr[100010]={0};
int main(){

    int x; scanf("%d",&x);
    for(int i=0;i<x;i++){
    	int y; scanf("%d",&y);
    	arr[i]=y;
	}

	sort(arr,arr+x);
	
    for(int i=0;i<x;i++){
    	
		if(i!=0){
			if(arr[i]==arr[i-1]){
				continue;
			}
		}
		printf("%d ",arr[i]);
    }

    return 0;
}

