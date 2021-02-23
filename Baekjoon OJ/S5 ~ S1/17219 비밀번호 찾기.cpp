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

vector <pair <string, string> > v;
pair <string, string> p[100005];

int search(int st, int end, string mok){
	
	if(st>end){
		return -1;
	}else{
		int mid=(st+end)/2;
		
		if(v[mid].first==mok){
			return mid;
		}else if(v[mid].first>mok){
			return search(st,mid-1,mok);
		}else{
			return search(mid+1,end,mok);
		}
		
	}
}

int main() {
	
	int n,m; scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		char c[25]={0,};
		string str1;
		scanf("%s",&c);
		str1=c;
		string str2;
		scanf("%s",&c);
		str2=c;
		p[i]=make_pair(str1,str2);
		v.push_back(p[i]);
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<m;i++){
		char c[25]={0,};
		string searchstr;
		scanf("%s",&c);
		searchstr=c;
		
		printf("%s\n", v[search(0,n,searchstr)].second.c_str());
		
	}
	
	return 0;
}


