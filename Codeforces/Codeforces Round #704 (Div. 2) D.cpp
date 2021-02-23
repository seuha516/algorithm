#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
#include <queue>
#include <map>
#define ll long long
#define ull unsigned long long

using namespace std;

string minus(string a,string b){
	
}

int main(){
	
	int a,b,k; scanf("%d %d %d",&a,&b,&k);
	
	if(b==1){
		if(k==0){
			printf("Yes\n");
			printf("1"); for(int i=0;i<a;i++)printf("0");
			printf("\n1"); for(int i=0;i<a;i++)printf("0");
		}else{
			printf("No");
		}
	}else if(a==0){
		if(k==0){
			printf("Yes\n");
			for(int i=0;i<b;i++)printf("1");
			printf("\n"); for(int i=0;i<b;i++)printf("1");
		}else{
			printf("No");
		}
	}else if(k<=a){
			
		printf("Yes\n");
			
		for(int i=0;i<b-1;i++)printf("1");
		for(int i=0;i<a-k;i++)printf("0");
		printf("1");
		for(int i=0;i<k;i++)printf("0");
		printf("\n");
			
		for(int i=0;i<b-1;i++)printf("1");
		for(int i=0;i<a;i++)printf("0");
		printf("1");
			
			
	}else if(k<=a+b-2){
			
		printf("Yes\n");
		int t=k-a;
		for(int i=0;i<b;i++)printf("1");
		for(int i=0;i<a;i++)printf("0");
		printf("\n");
		for(int i=0;i<b-1-t;i++)printf("1");
		printf("0");
		for(int i=0;i<t;i++)printf("1");
		for(int i=0;i<a-1;i++)printf("0");
		printf("1");
			
	}else{
		printf("No");
	}
	
	return 0;
}


