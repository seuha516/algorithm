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

int DP[10][200005]={0,};

int main(){
	

	
	for(int num=0;num<10;num++){
		int arr[10]={0,}; arr[num]=1;
		
		for(int i=1;i<=200000;i++){
			int add[10]={0,};
			for(int k=0;k<9;k++){
				add[k+1]=arr[k];
			}
			add[0]+=arr[9];
			add[1]+=arr[9];
			int hap=0;
			for(int k=0;k<10;k++){
				add[k]%=1000000007;
				arr[k]=add[k];
				hap+=arr[k]; hap%=1000000007;
			}
			DP[num][i]=hap;
		}
	}
	
	int tc;scanf("%d",&tc);
	while(tc--){
		int dap=0;
		int n,m; scanf("%d %d",&n,&m);
		while(n){
			dap+=DP[n%10][m]; dap%=1000000007;
			n/=10;
		}
		printf("%d\n",dap);
	}
	
	
	return 0;
}










