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

template <typename T>
T GCD(T a, T b){  
	return a%b==0? b : GCD(b,a%b);
}

vector<int> sosu;
vector<int> min_soinsoo;
int sosu_gaesoo;
void sosu_make(int N){
	min_soinsoo.assign(2,-1);
	for(int i=2;i<=N;i++) min_soinsoo.push_back(i);
	int sqrtN=(int)(sqrt(N));
	for(int i=2;i<=sqrtN;i++){
		if(min_soinsoo[i]==i){
			for(int j=i*i;j<=N;j+=i){
				if(min_soinsoo[j]==j){
					min_soinsoo[j]=i;
				}
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(min_soinsoo[i]==i) sosu.push_back(i);
	}
	sosu_gaesoo=sosu.size();
}

int n;
vector<int> need;
vector<int> already;
vector<int> dap;
int gcd;

int main(){
		
	int TC; scanf("%d",&TC);
	while(TC--){
		
		need.clear(); already.clear(); dap.clear(); gcd=1;
		
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); need.push_back(x); dap.push_back(0);
		}
		
		gcd=need[0];
		for(int i=1;i<n;i++){
			gcd=GCD(need[i],gcd);
		}
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); already.push_back(x);
		}
		
		if(n==1){
			if(already[0] < need[0]){
				printf("%d\n",need[0]-already[0]);
			}else{
				printf("0\n");
			}
			continue;
		}
		
		if(gcd==0)gcd=1;
		
		for(int i=0;i<n;i++){
			if(need[i]>already[i]){
				dap[i]=need[i]-already[i];
				already[i]=need[i];
			}
		}
		for(int i=0;i<n;i++){
			need[i]/=gcd;
		}
		
		int potion=0;
		
		for(int i=0;i<n;i++){
			if(already[i] % need[i]==0){
				potion=max(potion,already[i]/need[i]);
			}else{
				potion=max(potion,already[i]/need[i] + 1);
			}
		}
		
		for(int i=0;i<n;i++){
			need[i]*=potion;
		}

		for(int i=0;i<n;i++){
			dap[i] += (need[i]-already[i]);
		}
		
		for(int i=0;i<n;i++){
			printf("%d ",dap[i]);
		}printf("\n");
	}
	
	return 0;
}
