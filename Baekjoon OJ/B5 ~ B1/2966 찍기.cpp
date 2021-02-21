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

char c1[120];char c2[120];char c3[120];char c[120];
int aa=0,bb=0,cc=0;


int main(){
	
	int n;scanf("%d",&n);
	scanf("%s",c);
	for(int i=0;i<n;i++){
		
		if(i%6==0){
			c1[i]='A';
			c3[i]='C';
		}else if(i%6==1){
			c1[i]='B';
			c3[i]='C';
		}else if(i%6==2){
			c1[i]='C';
			c3[i]='A';
		}else if(i%6==3){
			c1[i]='A';
			c3[i]='A';
		}else if(i%6==4){
			c1[i]='B';
			c3[i]='B';
		}else if(i%6==5){
			c1[i]='C';
			c3[i]='B';
		}
		if(i%4==0){
			c2[i]='B';
		}else if(i%4==1){
			c2[i]='A';
		}else if(i%4==2){
			c2[i]='B';
		}else if(i%4==3){
			c2[i]='C';
		}
		if(c[i]==c1[i]) aa++;
		if(c[i]==c2[i]) bb++;
		if(c[i]==c3[i]) cc++;
	}
	
	int m=max(aa,max(bb,cc));
	printf("%d\n",m);
	if(m==aa){
		printf("Adrian\n");
	}
	if(m==bb){
		printf("Bruno\n");
	}
	if(m==cc){
		printf("Goran\n");
	}
	
	return 0;	
}



