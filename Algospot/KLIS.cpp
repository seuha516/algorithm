#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

#define TEST 0
#define intmax 2147483647

using namespace std;

int n,k; vector<int> v;
int cache[100002]; int cache2[100002];

int go(int st){ //v[st]부터 시작하는 lis의 길이 
	int &ret=cache[st];
	if(ret!=-1)return ret;
	ret=1;
	for(int i=st+1;i<n;i++){
		if(v[st]<v[i]){
			ret=max(ret,go(i)+1);
		}
	}
	return ret;
}
int start(int st){ //v[st]부터 시작하는 lis의 개수 	
	int &ret=cache2[st];
	if(ret!=-1)return ret;
	if(go(st)==1)return 1;
	
	ret=0;
	
	for(int i=st+1;i<n;i++){
		if(v[i]>v[st]&&go(st)==go(i)+1){
			ret=min<long long>(intmax,(long long)ret+start(i));
		}
	}
	return ret;
	
}
void kth(int st,int k,vector<int> &lis){ //v[st]부터 시작하는 k번째 LIS 
	
	vector<pair<int,int> > nextlist; //실제 수, 그 수의 번호 
	
	if(st!=0){lis.push_back(v[st]);}
	
	for(int i=st+1;i<n;i++){
		if(v[i]>v[st]&&go(st)==go(i)+1){
			nextlist.push_back(make_pair(v[i],i));
		}
	}
	
	sort(nextlist.begin(),nextlist.end());
	int nextlist_size=nextlist.size();
	
	for(int i=0;i<nextlist_size;i++){
		if(k<=start(nextlist[i].second)){
			kth(nextlist[i].second,k,lis); break;
		}else{
			k-=start(nextlist[i].second);
		}
		
	}
	
}

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		
		while(!v.empty())v.pop_back();
		v.push_back(-1000000);
		for(int i=0;i<100002;i++){cache[i]=-1; cache2[i]=-1;}
		
		scanf("%d %d",&n,&k);
		
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		n++;		
		
		vector<int> dap;
		kth(0,k,dap);
		
		printf("%d\n",go(0)-1);
		for(int i=0;i<dap.size();i++){
			if(i!=0)printf(" ");
			printf("%d",dap[i]);
		}if(TC!=0)printf("\n");
				
	}
	
    return 0;
}
