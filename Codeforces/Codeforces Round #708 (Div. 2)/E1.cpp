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


int main(){
	
	sosu_make(3165);
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,k; scanf("%d %d",&n,&k);
		int dap=1;
		set<int> s;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); 
			for(int j=0;j<sosu_gaesoo;j++){
				int sqsosu=sosu[j]*sosu[j];
				if(sqsosu>x) break;
				while(x%sqsosu==0) x/=sqsosu;
			}
			if(s.count(x)){
				s.clear(); dap++;
			}
			s.insert(x);
		}
		printf("%d\n",dap);
				
		
	}
	
	return 0;
}




