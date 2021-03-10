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
		set<int> exist;
		
		int num=0, M=-999, mex=0;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x);
			if(exist.count(x)) break;
			
			num++;
			exist.insert(x);
			M=max(M,x);
			if(x==mex){
				while(exist.count(mex)) mex++;
			}
		}
		
		for(int i=0;i<k;i++){
			
			if(mex==n){
				num+=k-i; break;
			}
			
			int add=(M+mex+1)/2;    //printf("max=%d, mex=%d, num=%d, add=%d\n",M,mex,num,add);
			if(exist.count(add)) break;
			num++; exist.insert(add); M=max(M,add);
			if(add==mex){
				while(exist.count(mex)) mex++;
			}
		}
		printf("%d\n",num);
	}
	
	
	return 0;
}

