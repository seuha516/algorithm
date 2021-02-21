#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>

using namespace std;

int main(){
	
	vector<int> v;	
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}

	int pal1[2005]={0,};
	int pal2[2005]={0,};
	
	for(int i=0;i<n;i++){
		int st=i; int end=i;
		pal1[i]=1;
		while(1){
			st--; end++;
			if(st<0 || end>n-1) break;
			if(v[st]!=v[end]) break;
			pal1[i]++;
		}		
	}
	for(int i=0;i<n-1;i++){
		int st=i; int end=i+1;
		if(v[st]!=v[end]){
			pal2[i]=0; continue;
		}
		pal2[i]=1;		
		while(1){
			st--; end++;
			if(st<0 || end>n-1) break;
			if(v[st]!=v[end]) break;
			pal2[i]++;
		}		
	}
	
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b; scanf("%d %d",&a,&b);
		a--; b--; int mid=(a+b)/2;
		
		if((b-a+1)&1){
			printf("%d\n",(pal1[mid]>=(b-a+2)/2)? 1:0);
		}else{
			printf("%d\n",(pal2[mid]>=(b-a+1)/2)? 1:0);
		}
	}
	
	return 0;
}

