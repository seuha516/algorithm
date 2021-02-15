#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int KMP(const string &H,const string &N){
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
		if(matched==Nsize) return st+1;
		if(matched==0) st++;
		else{
			st+=matched-pi[matched-1];
			already_match=pi[matched-1];			
		}	
	}
}

int main(){
	
	string s="";
	for(int i=1;i<=100000;i++){
		s+=to_string(i);
	}
	string x; cin >> x;
	printf("%d",KMP(s,x));
	
	return 0;
}
