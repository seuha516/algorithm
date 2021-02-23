#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>

using namespace std;

long long llpow(long long x,long long y){  // Á¤¼öÀÇ °ÅµìÁ¦°ö (x^y) 
	long long ret=1;
	for(int i=0;i<y;i++){
		ret*=x;
	}
	return ret;
} 

string E; string sorted_E;
int len;
long long m;
long long dap;
long long M=1000000007;

long long cache[32770][21][2];

long long go(bool used[15], long long mod, string s,int inja){

	
	int idx=0;
	for(int i=0;i<len;i++){
		idx*=2; idx+=used[i];
	}
	long long &ret=cache[idx][mod][inja];
	
	int picked=0;
	for(int i=0;i<len;i++){picked+=used[i];}
	
	if(s>=E)return ret=0;	
	if(ret!=-1)return ret%M;
	
	if(picked==len){
		if(mod==0){
			return ret=1;
		}
		return ret=0;
	}
	
	ret=0;
	
	for(int i=0;i<E.length();i++){
		if(!used[i] && (i==0 || sorted_E[i-1]!=sorted_E[i] || used[i-1])){
			int ij=0;

			if(picked==0||inja==1){
				if(sorted_E[i]==E[picked]) ij=1;
				else if(sorted_E[i]>E[picked]) continue;
			}
			used[i]=1;
			int cx=sorted_E[i]-48;
			long long x=(long long)cx*llpow(10,len-picked-1);
			x%=m;
			if(x==mod)x=0;
			else if(x>mod)x=m+mod-x;
			else x=mod-x;
			ret+=go(used,x,s+sorted_E[i],ij);
			ret%=M;
			used[i]=0;
		}
	}
	return ret%M;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		for(int i=0;i<32770;i++){for(int j=0;j<21;j++){cache[i][j][0]=cache[i][j][1]=-1;}}
		dap=0;
		
		cin >> E;
		scanf("%lld",&m);
		sorted_E=E; sort(sorted_E.begin(),sorted_E.end());
		len=E.length();
		
		bool used[15]={0,};
		printf("%d\n",go(used,0,"",0));

	}	
	
	return 0;	
}
