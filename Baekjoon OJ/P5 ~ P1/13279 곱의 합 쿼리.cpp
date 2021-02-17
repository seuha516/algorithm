#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

vector<int> v[30005];

vector<int> mul(vector<int> a, vector<int> b){
	vector<int> ret;
	int asize=a.size(), bsize=b.size();
	int size=asize+bsize-1;
	for(int i=0;i<size;i++){
		int temp=0;
		for(int j=max(0,i-bsize+1);j<=i&&j<asize;j++){
			temp=((long long)temp+(long long)a[j]*(long long)b[i-j])%100003LL;
		}
		ret.push_back(temp);
	}
	return ret;
}
vector<int> go(int st,int end){
	if(st==end){
		return v[st];
	}else if(st+1==end){
		return mul(v[st],v[end]);
	}
	else{
		return mul(go(st,(st+end)/2), go((st+end)/2+1,end));
	}
}

int main(){
	
	int n; scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);
		v[i].push_back(1); 
		v[i].push_back(x);
	}
	
	vector<int> dap=go(0,n-1);
	
	int q; scanf("%d",&q);
	for(int i=0;i<q;i++){
		int k; scanf("%d",&k);
		printf("%d\n",dap[k]);
	}
	
	return 0;
}

