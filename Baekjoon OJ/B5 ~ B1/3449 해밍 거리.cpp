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
#include <random>

using namespace std;

int arr[100002]; 

int main(){
	int t;scanf("%d",&t);
	while(t--){
		char c1[120]={0,}; char c2[120]={0,};
		scanf("%s",c1);
		scanf("%s",c2);
		int dap=0;
		for(int i=0;c1[i]!=0;i++){
			if(c1[i]!=c2[i]){
				dap++;
			}
		}
		printf("Hamming distance is %d.\n",dap);
	}
return 0;}



