#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

int arr[10][10];
int dap=987654321;

bool can(int x,int y,int len){
	for(int i=x;i<x+len;i++){
		for(int j=y;j<y+len;j++){
			if(i>9||j>9) return 0;
			if(arr[i][j]==0) return 0; 
		}
	}
	return 1;
}
bool finish(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(arr[i][j]==1) return 0; 
		}
	}
	return 1;
}
void use(int x,int y,int len,int mode){
	for(int i=x;i<x+len;i++){
		for(int j=y;j<y+len;j++){
			arr[i][j]+=mode;
		}
	}
}
void show(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printf("%d ",arr[i][j]); 
		}
		printf("\n");
	}
}

void go(int num,int x,vector<int> paper){
	if(finish()){
		dap=min(dap,num); return;
	}
	int i=x/10, j=x%10;
	if(arr[i][j]==0){
		go(num,x+1,paper); return;
	}
	bool ok=0;
	for(int len=1;len<=5;len++){
		if(can(i,j,len)&&paper[len-1]){
			ok=1;
			use(i,j,len,-1);
			paper[len-1]--;
			go(num+1,x+1,paper);
			paper[len-1]++;					
			use(i,j,len,1);
		}
	}
	if(ok==0) return;
}

int main(){
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	vector<int> v(5,5);
	go(0,0,v);
	if(dap==987654321) dap=-1;
	cout << dap;
	
	return 0;
}

