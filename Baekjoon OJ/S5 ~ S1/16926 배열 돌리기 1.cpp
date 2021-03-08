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

int n,m,k;
int arr[500][500];

void show(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void go(){
	for(int j=0;j<min(n,m)/2;j++){
		int temp=arr[j][j];
		for(int k=0;k<m-1-(2*j);k++){
			arr[j][j+k]=arr[j][j+k+1];
		}
		for(int k=0;k<n-1-(2*j);k++){
			arr[k+j][m-1-j]=arr[k+j+1][m-1-j];
		}
		for(int k=0;k<m-1-(2*j);k++){
			arr[n-1-j][m-1-j-k]=arr[n-1-j][m-1-j-k-1];
		}
		for(int k=0;k<n-1-(2*j)-1;k++){
			arr[n-1-j-k][j]=arr[n-1-j-k-1][j];
		}
		arr[j+1][j]=temp;
	}
}

int main(){
	
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<k;i++){
		go();
	}
	show();
	
	return 0;
}

