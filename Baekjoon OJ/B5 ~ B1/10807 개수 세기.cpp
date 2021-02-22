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
	
	int n;scanf("%d",&n); 
	int arr[300]={0,};
	while(n--){
		int a; scanf("%d",&a); arr[a+100]++;
	}
	int b;scanf("%d",&b);
	printf("%d",arr[b+100]);
	return 0;
}



