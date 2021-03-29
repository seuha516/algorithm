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

template <typename T>
void showarr(T arr[],int n){  
	printf("\n< array >\n");
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}printf("\n");
}


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		vector<int> v;
		int n,w; scanf("%d %d",&n,&w);
		
		int arr[25]={0,};
		
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x);
			int cnt=0;
			while(x>1){
				cnt++; x/=2; 
			}
			arr[cnt]++;
		}
		//showarr(arr,n);
		
		int dap=0;
		int num=n;
		while(num){
			//printf("%d번째 막대.\n",dap+1);
			int len=w;
			while(1){
				bool ok=0;
				//printf("len = %d\n",len);
				for(int i=24;i>=0;i--){
					if(1<<i <= len && arr[i]!=0 ){
						len-=(1<<i); arr[i]--; num--; ok=1; 
						//printf("%d 사용\n",1<<i);
						break;
					}
				}
				if(!ok){
					dap++; break;
				}
			}
		}
		
		printf("%d\n",dap);
		
	}
	
	return 0;
}





















