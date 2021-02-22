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
#include <random>

using namespace std;
int check=1;
int a,t,booho;	
int cnt=-1;
int now=0;
int lev=2;
bool eend;	

void ccc(){
	if(eend) return;
	if(now==booho){		
		t--;
		if(t==0){
			printf("%d",cnt%a); eend=true;
		}
	}
}


int main(){
	
	scanf("%d %d %d",&a,&t,&booho);
	
	while(1){
		
		now=0;cnt++; ccc();
		now=1;cnt++; ccc();
		now=0;cnt++; ccc();
		now=1;cnt++; ccc();
		
		for(int i=0;i<lev;i++){
			now=0;cnt++; ccc();
		}
		for(int i=0;i<lev;i++){
			now=1;cnt++; ccc();
		}
		lev++;
		
		if(eend==1) return 0;
	}
	
return 0;}


