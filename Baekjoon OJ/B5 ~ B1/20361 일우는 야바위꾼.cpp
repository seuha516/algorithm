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
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647

using namespace std;

int arr[200005];

int main(){
	
	int n,x,k; scanf("%d %d %d",&n,&x,&k);
	arr[x]=1;
	
	for(int i=0;i<k;i++){
		int a,b; scanf("%d %d",&a,&b);
		int temp;
		temp=arr[a]; arr[a]=arr[b]; arr[b]=temp;		
	}
	
	for(int i=0;i<=n;i++){
		if(arr[i])printf("%d",i);
	}
	
	return 0;	
}


