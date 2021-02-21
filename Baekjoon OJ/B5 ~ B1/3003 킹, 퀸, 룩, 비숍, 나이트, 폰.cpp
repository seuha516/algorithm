#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int arr[6];int b[6]={1,1,2,2,2,8};
	for(int i=0;i<6;i++){
		scanf("%d",arr+i);
	}
	for(int i=0;i<6;i++){
		printf("%d ",b[i]-arr[i]);
	}

	return 0;
}
