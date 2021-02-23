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

int a1[10005];
int a2[10005];
bool ok[10005];

int main(){
	
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",a1+i);
	}
	int check=0;
	for(int i=n-1;i>=0;i--){
		if(a1[i]>a1[i-1]){
			check=i; break;
		}
	}check--;
	
	if(check==-1){
		printf("-1");return 0;
	}
		
	for(int i=0;i<check;i++){
		a2[i]=a1[i];
		ok[a2[i]]=1;
	}
	
	for(int i=1;i<=n;i++){
		if(ok[i])continue;
		if(i>a1[check]){
			a2[check]=i; ok[a2[check]]=1; break;
		}
	}
	
	int k=1;
	for(int i=check+1;i<n;i++){
		while(ok[k]){
			k++;
		}
		a2[i]=k; ok[k]=1;
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",a2[i]);
	}

	
	return 0;
}




