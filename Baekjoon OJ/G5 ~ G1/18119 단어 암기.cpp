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

vector <int> v;

void decode(int x){
	for(int i=25;i>=0;i--){
		
		int t=(1<<i); //printf("\n%d, %d\n",t,t&x);
		if(t&x){
			printf("1");
		}else{
			printf("0");
		}
		
		if(i%5==1) printf(" ");
	}
	printf("\n");
}

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		char c[1005]={0,}; scanf("%s",c);
		int res=0;
		for(int j=0;c[j]!=0;j++){
			res=res|(1<<(c[j]-'a'));
		}
		v.push_back(res);
	}int now=(1<<26)-1;
	
	while(m--){
		int x; char y; scanf("%d %c",&x,&y); 
		if(x==1){
			if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u'){
			}else{
				int mask=(1<<(y-'a')); mask=~mask; 
				now=now&mask;
			}
		}else{
			now=now|(1<<(y-'a'));
		}
		
		int dap=0;
		for(int i=0;i<v.size();i++){			
			int t1=now&v[i]; int t2=v[i];
			if(t1==t2){
				dap++; 
			}
		}
		printf("%d\n",dap);
	}

	return 0;
}

