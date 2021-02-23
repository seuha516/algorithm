#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;
vector <string> v;
vector <string> dap;

int search(int st,int end,string mok){
	if(st>end){
		return 0;
	}
	int mid=(st+end)/2;
	if(v[mid]==mok){
		dap.push_back(mok);
		return 1;
	}else if(v[mid]>mok){
		return search(st,mid-1,mok);
	}else{
		return search(mid+1,end,mok);
	}
}

int main(){

	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		char c [25]; scanf("%s",c);
		string str=c; v.push_back(str);
	}
	sort(v.begin(),v.end());

	int t=0;
	for(int i=0;i<m;i++){
		char c [25]; scanf("%s",c);
		string str=c;
		t+=search(0,v.size()-1,str);
	}
	sort(dap.begin(),dap.end());
	printf("%d\n",t);
	for(int i=0;i<t;i++){
		printf("%s\n",dap[i].c_str());
	}	
	
	return 0;
}





