#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 1

using namespace std;

void go(int(*arr)[51],int x,int y){
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			arr[x+i][y+j]=1-arr[x+i][y+j];
		}
	}
}

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	int arr1[51][51]={0,}; int arr2[51][51]={0,};
	for(int i=0;i<n;i++){
		string x; cin >> x;
		for(int j=0;j<m;j++){
			arr1[i][j]=x[j]-48;
		}
	}
	for(int i=0;i<n;i++){
		string x; cin >> x;
		for(int j=0;j<m;j++){
			arr2[i][j]=x[j]-48;
		}
	}

	int dap=0;
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-2;j++){
			if(arr1[i][j]!=arr2[i][j]){
				go(arr1,i+1,j+1); dap++;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i][j]!=arr2[i][j])dap=-1;
		}
	}
	
	printf("%d",dap);
	
   
    return 0;
}



