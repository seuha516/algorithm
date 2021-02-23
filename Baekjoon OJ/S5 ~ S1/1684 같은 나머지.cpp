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

int namergi(int a,int b){
	int t=a%b;
	if(t<0)t+=b; return t;
}


int main(){
	
	int n; scanf("%d",&n); int arr[1002]={0,}; int M=0;
	for(int i=0;i<n;i++){
		scanf("%d",arr+i); M=max(M,arr[i]);
	}
	
	for(int i=M;i>=1;i--){
		int temp=namergi(arr[0],i); int ok=1;
		for(int j=1;j<n;j++){
			if(temp!=namergi(arr[j],i)){
				ok=0;break;
			}
		}
		if(ok){
			printf("%d",i); return 0;
		}
	}
	
	
	return 0;
}



