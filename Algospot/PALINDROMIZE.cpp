#include <iostream>
#include <algorithm>
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
	
	int X=0;
	vector<int> ret;
	int st=0, already_match=0;
	while(st<=Hsize-Nsize){
		int matched=already_match;		
		for(int i=already_match;i<Nsize;i++){
			if(H[st+i]!=N[i]) break;
			matched++;
		}
		if(matched==Nsize) return X+Hsize;
		if(matched==0){
			st++;
			Nsize-=1; X+=1;
		}else{
			st+=matched-pi[matched-1];
			already_match=pi[matched-1];
			Nsize-=matched-pi[matched-1]; X+=matched-pi[matched-1];				
		}
	}
}
int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		string s; cin >> s;
		string s_=s; reverse(s_.begin(),s_.end());
		printf("%d\n",KMP(s,s_));
	}
	
	return 0;
}
