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
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int go(int n,char arr[][51]){
	int ret=0;
	for(int i=0;i<n;i++){
		int temp=1;
		for(int j=1;j<n;j++){
			if(arr[i][j]!=arr[i][j-1]){
				ret=max(ret,temp); temp=1; 
			}else{
				temp++;
			}
		}ret=max(ret,temp);
		
		temp=1;
		for(int j=1;j<n;j++){
			if(arr[j][i]!=arr[j-1][i]){
				ret=max(ret,temp); temp=1; 
			}else{
				temp++;
			}
		}ret=max(ret,temp);
	}
	return ret;
}


int main(){
	
	char arr[51][51];
	
	int n; scanf("%d",&n); getchar();
	for(int i=0;i<n;i++){
		string s; cin>>s; getchar();
		for(int j=0;j<n;j++){
			arr[i][j]=s[j];
		}
	}
	
	int dap=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			swap(arr[i][j],arr[i][j-1]);
			dap=max(dap,go(n,arr));
			swap(arr[i][j],arr[i][j-1]);
			swap(arr[j][i],arr[j-1][i]);dap=max(dap,go(n,arr));swap(arr[j][i],arr[j-1][i]);
			
		}
	}
	
	printf("%d",dap);
	
	
	return 0;
}




