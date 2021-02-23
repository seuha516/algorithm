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
#include <stack>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	int n;scanf("%d",&n);vector <int> v;
	for(int i=0;i<n;i++){
		int x;scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());
	int a;scanf("%d",&a);
	
	int st=1,end;
	int stnum=-1;
	
	for(int i=0;i<n;i++){
		if(v[i]==a){
			printf("0"); return 0;
		}
		
		if(v[i]<a){
			st=v[i]+1;
			stnum=i;
		}
		
		
	}
	end=v[stnum+1]-1;	
	printf("%d",max(0,(a-st+1)*(end-a+1)-1));
	
return 0;}



