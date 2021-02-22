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
	
	int arr[5000]={0,};
	int hap[5000]={0,};
	
	int c=1;
	for(int i=1;i<=50;i++){
		for(int j=1;j<=i;j++){
			arr[c++]=i;	
		}
	}
	
	for(int i=1;i<=1000;i++){
		hap[i]=hap[i-1]+arr[i];
	}
	
	int a,b;scanf("%d %d",&a,&b);printf("%d",hap[b]-hap[a-1]);
	
	
	return 0;
}


