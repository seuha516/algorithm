#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

vector<int> KMP(const string &H,const string &N){
	int Hsize=H.size(), Nsize=N.size();

	vector<int> pi(Nsize,0); //ÀüÃ³¸®
	int begin=1, mat=0;
	while(begin+mat<Nsize){
		if(N[begin+mat]==N[mat]){
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
	
	vector<int> ret;
	int st=0, already_match=0;
	while(st<=Hsize-Nsize){
		int matched=already_match;		
		for(int i=already_match;i<Nsize;i++){
			if(H[st+i]!=N[i]) break;
			matched++;
		}
		if(matched==Nsize) ret.push_back(st);
		if(matched==0) st++;
		else{
			st+=matched-pi[matched-1];
			already_match=pi[matched-1];			
		}	
	}
	
	return ret;
}

int main(){
	
	string a,b; getline(cin,a); getline(cin,b);
	vector<int>dap=KMP(a,b);
	printf("%d\n",dap.size());
	for(int i=0;i<dap.size();i++){
		printf("%d ",dap[i]+1);
	}
	
	return 0;
}
