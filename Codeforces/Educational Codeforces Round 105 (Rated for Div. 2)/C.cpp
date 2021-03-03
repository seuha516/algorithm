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


int find(const vector<int> &v,int push){
	return upper_bound(v.begin(),v.end(),push)-v.begin();
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		vector<int> Apos,Aneg,Bpos,Bneg,over1,over2;
		int n,m; scanf("%d %d",&n,&m);
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); 
			if(x>0) Apos.push_back(x);
			else Aneg.push_back(-x);
		}
		sort(Apos.begin(),Apos.end()); sort(Aneg.begin(),Aneg.end());
		for(int i=0;i<m;i++){
			int x; scanf("%d",&x);
			if(x>0) Bpos.push_back(x);
			else Bneg.push_back(-x);
		}
		sort(Bpos.begin(),Bpos.end()); sort(Bneg.begin(),Bneg.end());
		for(int i=0;i<Bpos.size();i++){
			if(binary_search(Apos.begin(),Apos.end(),Bpos[i])){
				over1.push_back(Bpos[i]);
			}
		}
		for(int i=0;i<Bneg.size();i++){
			if(binary_search(Aneg.begin(),Aneg.end(),Bneg[i])){
				over2.push_back(Bneg[i]);
			}
		}
		
		
		int dap1=0,dap2=0;
		
	//	showvec(over1); showvec(over2);

		
	//	showvec(Apos); showvec(Bpos);
		
		for(int i=0;i<Bpos.size();i++){
			int dest=Bpos[i]-1;
			int X=0;
			while(1){
				if(X==find(Apos,dest+X)) break;
				X=find(Apos,dest+X);
			}
			
			int res=find(Bpos,dest+X)-find(Bpos,dest)+(over1.size()-find(over1,dest+X));
		//	printf("Bpos[%d]=%d, %d까지 밀면 %d개가 밀려요 (%d~%d 차지)\n",i,Bpos[i],dest,X,dest+1,dest+X);
		//	printf("이러면 %d점을 얻음!\n",res);
			dap1=max(dap1,res);
		}
		
	//	showvec(Aneg); showvec(Bneg);
		
		for(int i=0;i<Bneg.size();i++){
			int dest=Bneg[i]-1;
			int X=0;
			while(1){
				if(X==find(Aneg,dest+X)) break;
				X=find(Aneg,dest+X);
			}
			int res=find(Bneg,dest+X)-find(Bneg,dest)+(over2.size()-find(over2,dest+X));
		//	printf("Bpos[%d]=%d, %d까지 밀면 %d개가 밀려요 (%d~%d 차지)\n",i,Bneg[i],dest,X,dest+1,dest+X);
		//	printf("이러면 %d점을 얻음!\n",res);
			dap2=max(dap2,res);
		}
		
		printf("%d\n",dap1+dap2);
		
	}
	
	
	return 0;
}

