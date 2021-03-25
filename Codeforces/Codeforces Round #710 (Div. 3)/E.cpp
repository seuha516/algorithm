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
		int n; scanf("%d",&n);
		vector<int> used1(n+5,0);
		vector<int> used2(n+5,0);
		vector<int> appear(n+5,0);
		vector<int> dap1(n,0);
		vector<int> dap2(n,0);
		
		priority_queue< int > pq;
		
		int cnt=1;
		int M=0;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x);
			if(appear[x]){
				while(used1[cnt])cnt++;
				dap1[i]=cnt; used1[cnt]=1;
				dap2[i]=pq.top(); pq.pop();
			}else{
				appear[x]=1;
				used1[x]=1;
				used2[x]=1;
				dap1[i]=dap2[i]=x;
				for(int j=M+1;j<x;j++){
					pq.push(j); 
				}M=x;
			}
		}
		
		
		for(int i=0;i<n;i++){
			printf("%d ",dap1[i]);
		}printf("\n");
		for(int i=0;i<n;i++){
			printf("%d ",dap2[i]);
		}printf("\n");	
	}
	
	return 0;
}
