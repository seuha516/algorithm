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
	
	int arr[3];scanf("%d %d %d",arr,arr+1,arr+2); sort(arr,arr+3);
	char c[4]={0,};scanf("%s",c);
	
	if(c[0]=='A'){
		printf("%d ",arr[0]);
	}else if(c[0]=='B'){
		printf("%d ",arr[1]);
	}else if(c[0]=='C'){
		printf("%d ",arr[2]);
	}
	if(c[1]=='A'){
		printf("%d ",arr[0]);
	}else if(c[1]=='B'){
		printf("%d ",arr[1]);
	}else if(c[1]=='C'){
		printf("%d ",arr[2]);
	}
	if(c[2]=='A'){
		printf("%d ",arr[0]);
	}else if(c[2]=='B'){
		printf("%d ",arr[1]);
	}else if(c[2]=='C'){
		printf("%d ",arr[2]);
	}
	
	return 0;	
}



