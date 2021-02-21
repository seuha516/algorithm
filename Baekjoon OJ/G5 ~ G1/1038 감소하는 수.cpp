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

vector <int> vvv;

int jari(long long a){
   int n=0;
   while(a){
      a/=10;n++;
   }
   return n;
}

int DFS(long long a){
	
	vvv.push_back(a);
	
	if(jari(a)==10||a%10==0){
		return 0;
	}
	
	for(int i=0;i<10;i++){
		if(a%10>i) DFS(a*10+i);
	}
	
	return 0;
}

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<10;i++){
		DFS(i);
	}
	
	sort(vvv.begin(),vvv.end());
	
	if(n>1022){
		printf("-1");
	}else if(n==1022){
		printf("9876543210");
	}else{
		printf("%d",vvv[n]);
	}

	return 0;
}



