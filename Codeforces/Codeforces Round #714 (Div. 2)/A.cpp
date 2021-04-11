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


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
	
		int n,k; scanf("%d %d",&n,&k);
		if(k>(n-1)/2){
			printf("-1\n"); continue;
		}
		
		int arr[150]={0,};
		
		int max=n;
		for(int i=0;i<k;i++){
			arr[i*2+1]=max--;
		}
		int min=1;
		for(int i=0;i<n;i++){
			if(arr[i]==0) arr[i]=min++;
		}
		
		
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}printf("\n");
				
		
	}
	
	return 0;
}










