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
	
	int st=0, already_match=0;
	while(st<=Hsize-Nsize){
		int matched=already_match;		
		for(int i=already_match;i<Nsize;i++){
			if(H[st+i]!=N[i]) break;
			matched++;
		}
		if(matched==Nsize) return st;
		if(matched==0) st++;
		else{
			st+=matched-pi[matched-1];
			already_match=pi[matched-1];			
		}	
	}
	
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		int dap=0;
		string now; cin >> now;
		for(int i=0;i<n;i++){
			string next; cin >> next;
			if(i%2==0){
				dap+=KMP(next+next,now);
				//printf(">> %d\n",KMP(next+next,now));
			}else{
				dap+=KMP(now+now,next);
				//printf(">> %d\n",KMP(now+now,next));
			}
			now=next;
		}
		
		printf("%d\n",dap);		
	}	
	
	return 0;
}

