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
	
	char a[100]={0,};
	scanf("%s",a);
	
	int t1=1;
	int t2=0;
	int t3=0;
	
	for(int i=0;a[i]!=0;i++){
		int x=a[i]-'A'+1;
		if(x==1){
			swap(t1,t2);
		}else if(x==2){
			swap(t3,t2);
		}else{
			swap(t1,t3);
		}
		
		
	}
	
	if(t1){
		printf("1");
	}else if(t2){
		printf("2");
	}else{
		printf("3");
	}

	return 0;
}
