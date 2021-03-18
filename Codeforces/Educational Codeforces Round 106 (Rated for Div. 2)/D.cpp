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
void showvec(vector<T>& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		cout << *(v.begin()+i) << " ";
	}printf("\n");
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

int result[20000005];

int main(){
	
	sosu_make(20000005); memset(result,-1,sizeof(result));
//	result[1]=1;
//	for(int i=2;i<20000002;i++){
//		set<int> s;
//		int X=i;
//		while(X>1){
//			s.insert(min_soinsoo[X]);
//			X/=min_soinsoo[X];
//		}
//		result[i]=(1<<s.size());
//	}
//	printf("ready\n");
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int c,d,x; scanf("%d %d %d",&c,&d,&x); int sqx=(int)(sqrt(x));
		int dap=0;
		vector<int> G;
		for(int i=1;i<=sqx;i++){
			if(x%i==0){
				G.push_back(i);
				if(i*i!=x) G.push_back(x/i);
			}
		}
		
		
		for(int i=0;i<G.size();i++){
			
			int X=G[i]+d;
			if(X%c) continue;
			X/=c;
			
			if(X==1){
				dap++; continue;
			}
			
			int X_=X;
			if(result[X_]!=-1){
				dap+=result[X_]; continue;
			}
			
			int temp=0;
			while(X>1){
				int insoo=min_soinsoo[X];
				temp++;
				while(min_soinsoo[X]==insoo) X/=insoo;
			}
			
			result[X_]=1<<temp;
			
			dap+=(1<<temp);
		}
		printf("%d\n",dap);
	}
	
	return 0;
}











