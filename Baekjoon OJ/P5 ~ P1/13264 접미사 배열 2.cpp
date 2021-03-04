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
		
				
		
	}
	
	return 0;
}#include <iostream>
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

vector<int> kmp(const string &H,const string &N){
	int Hsize=H.size(), Nsize=N.size();

	vector<int> pi(Nsize,0);
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
int str_overlap(const string &H,const string &N){
	int Hsize=H.size(), Nsize=N.size();
	vector<int> pi(Nsize,0); 
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
	int st=0, matched=0;
	while(st<Hsize){
		if(matched<Nsize && H[st+matched]==N[matched]){
			matched++;
			if(st+matched==Hsize) return matched;
		}else{
			if(matched==0) st++;
			else{
				st+=matched-pi[matched-1];
				matched=pi[matched-1];
			}
		}
	}
	return 0;
}
struct Comparator{
	const vector<int> &group;
	int t;
	Comparator(const vector<int> &_group,int _t): group(_group), t(_t){}
	bool operator () (int a,int b){
		if(group[a]!=group[b]) return group[a]<group[b];
		return group[a+t]<group[b+t];
	}
};
vector<int> suffix_array(const string &s){
	int n=s.size();
	int t=1;
	vector<int> group(n+1);
	for(int i=0;i<n;i++) group[i]=s[i];
	group[n]=-1;
	vector<int> ret(n);
	for(int i=0;i<n;i++) ret[i]=i;
	while(t<n){
		Comparator cp(group,t);
		sort(ret.begin(),ret.end(),cp);
		t*=2;
		if(t>=n)break;
		vector<int> newgroup(n+1);
		newgroup[n]=-1;
		newgroup[ret[0]]=0;
		for(int i=1;i<n;i++){
			if(cp(ret[i-1],ret[i])) newgroup[ret[i]]=newgroup[ret[i-1]]+1;
			else newgroup[ret[i]]=newgroup[ret[i-1]];
		}
		group=newgroup;
	}
	return ret;
}
vector<int> lcp(const string &s,const vector<int> &sa){
	vector<int> pos(s.size());
	vector<int> ret(s.size());
	for(int i=0;i<s.size();i++){
		pos[sa[i]]=i;
	}
	for(int i=0,k=0;i<sa.size();i++,k=max(k-1,0)){
		if(pos[i]==0) continue;
		for(int j=sa[pos[i]-1];s[i+k]==s[j+k];k++);
		ret[pos[i]]=k;
	}
	return ret;
}

int main(){
	
	string s; cin >> s;
	vector<int> v=suffix_array(s);
	for(int i=0;i<v.size();i++){
		printf("%d\n",v[i]);
	}
	
	return 0;
}
