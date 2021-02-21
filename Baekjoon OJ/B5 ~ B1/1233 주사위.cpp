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

	int arr[90000]={0,};
	int a,b,c; int d=0; scanf("%d %d %d",&a,&b,&c);
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<c;k++){
				arr[i+j+k+3]++;
			}
		}
	}
	int x=0; int y=0;
	
	for(int i=3;i<=a+b+c;i++){
		if(arr[i]>x){
			y=i;
			x=arr[i];
		}
	}
	printf("%d",y);
	
	return 0;
}
 
