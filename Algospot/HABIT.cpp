#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

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



int common(const string &s,int a,int b){
	int i;
	int size=s.size()-max(a,b);
	for(i=0;i<size;i++){
		if(s[a+i]!=s[b+i]){
			break;
		}
	}
	return i;
}

int main(){
	
	int TC; scanf("%d",&TC); 
	while(TC--){
		
		int dap=0;
		int k; string s;
		scanf("%d",&k); getchar(); cin >> s; getchar();
		
		if(k==1){
			printf("%d\n",s.size()); continue;
		}
		
		vector<int> suf=suffix_array(s);
		
		for(int i=k-1;i<suf.size();i++){
			int temp=common(s,suf[i-k+1],suf[i]);
			dap=max(dap,temp);
		}
		
		printf("%d\n",dap);
		
	}
	
	return 0;
}
