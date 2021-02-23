#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

vector<int> KMP(const string &X){
	vector<int> ret;
	int Xsize=X.size();
	vector<int> pi(Xsize,0); //ÀüÃ³¸®
	int begin=1, mat=0;
	while(begin+mat<Xsize){
		if(X[begin+mat]==X[mat]){
			mat++;
			pi[begin+mat-1]=mat;
		}else{
			if(mat==0) begin++;
			else{
				begin+=mat-pi[mat-1];
				mat=pi[mat-1];
			}
		}
	}
	ret.push_back(Xsize);
	int x=pi[Xsize-1];
	while(1){
		if(x==0)break;
		ret.push_back(x);
		x=pi[x-1];
		
	}
	return ret;
}

int main(){
	
	string a,b; cin>>a>>b;
	a+=b;
	
	vector<int> dap=KMP(a);
	
	for(int i=dap.size()-1;i>=0;i--){
		printf("%d ",dap[i]);
	}
	
	
	return 0;
}
