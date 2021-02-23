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

vector <pair<string,int> > v;

int search(int st, int end, string mok){
	if(end<st){
		return -1;
	}
	int mid=st+end; mid/=2;
	
	if(v[mid].first==mok){
		return (v[mid].second)+1;
	}else if(v[mid].first>mok){
		return search(st,mid-1,mok);
	}else{
		return search(mid+1,end,mok);
	}
	
	
}
int main() {
	
	pair<string,int>p[100001];
	
	
	int n,m;scanf("%d %d",&n,&m);
	
	char name[100001][21]={0,};
	string str;
	for(int i=0;i<n;i++){
		scanf("%s",name+i);
		str=name[i];
		
		p[i]=make_pair(str,i);
		v.push_back(p[i]);
		
	} 
	
	sort(v.begin(),v.end());
		
	for(int i=0;i<m;i++){
		char input[21]={0,};
		scanf("%s",input);
		string sttr=input;
		
		if(input[0]<58){ //¼ýÀÚ 
			int num=0;
			for(int j=0;input[j]!=0;j++){
				num*=10;
				num+=input[j]-48;
			}

			printf("%s\n",name[num-1]);
		}else{
			
			printf("%d\n",search(0,n,sttr));
		}
		
	}
	
	
	return 0;
}
