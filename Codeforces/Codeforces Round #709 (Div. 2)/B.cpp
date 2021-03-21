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
		
		vector<int> v;
		
		int n; scanf("%d",&n);
		
		int C=-1;
		int neg=1;
		
		bool can=true;
		int big=-1;
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
			big=max(big,x);
			
			if(i==0) continue;
			
			int cha=x-v[i-1];
			
			if(cha>=0){
				if(C==-1) C=cha;
				else{
					if(C!=cha){
						can=0; break;
					}
				}
			}else{
				if(neg==1) neg=cha;
				else{
					if(neg!=cha){
						can=0; break;
					}
				}
			}
		}
		
		int M=C-neg;
		
		if(can==0){
			printf("-1\n");
		}else if(neg==1&&C==-1){
			printf("0\n");
		}else if(neg==1){
			printf("0\n");
		}else if(C==-1){
			printf("0\n");
		}else{
			if(big<M){
				printf("%d %d\n",M,C);
			}else{
				printf("-1\n");
			}
		}
		
	}
	
	return 0;
}


