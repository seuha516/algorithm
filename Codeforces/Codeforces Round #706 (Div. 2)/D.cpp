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

int n;
vector<int> mount;
vector<pair<int,int>> H;


int main(){
	
	scanf("%d",&n);
	int past=-1, h=0;
	int dap=0;

	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);
		if(i>0){
			if(x<past){
				if(i==1) h=-1;
				if(h>0){
					mount.push_back(h); h=-2;
				}else{
					h--;
				}
			}else{
				if(i==1) h=1;
				if(h<0){
					mount.push_back(h); h=2;
				}else{
					h++;
				}
			}
		}
		past=x;
	} mount.push_back(h);
	
	for(int i=0;i<mount.size();i++){
		H.push_back({abs(mount[i]),i});
	}
	sort(H.begin(),H.end());
	int Hsize=H.size();
	
	
	for(int i=0;i<mount.size()-1;i++){
		if(mount[i]>0&&mount[i+1]<0){
			//°íÁ¡ 
			
			int L=mount[i], R=-mount[i+1];
			bool win=1;
			
			int Daniel_best=-1;
			for(int j=Hsize-1;j>=0;j--){
				if(H[j].second!=i && H[j].second!=i+1){
					Daniel_best=H[j].first; break;
				}
			}
			
			
			if(Daniel_best>=max(L,R)) win=0;
			
			int LL=L;
			int RR=R;
			if(L%2==1) L--;
			if(R%2==1) R--;
			if(L>=RR) win=0;
			if(R>=LL) win=0;
			
			dap+=win;
		}
	}
	
	
	printf("%d",dap);
	
	return 0;
}

