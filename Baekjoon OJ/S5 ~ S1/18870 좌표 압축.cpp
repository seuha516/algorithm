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

vector< pair<int,int> > v;
pair<int,int> p;
vector<int> value;

struct wow{
		int num;
		int realgap;
		int value;		
};

bool cmp(const wow &p1, const wow &p2){
	if(p1.num<p2.num){
		return 1;
	}else{
		return 0;
	}
	
	
}


int main() {
	
	int n; scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		p=make_pair(a,i);
		v.push_back(p);
	}
	
	sort(v.begin(),v.end());
		
	int temp=n;
	int k=0; 
	for(int i=0;i<temp;i++){
		if(k==0){
			value.push_back(i);
		}else{
			if(v[k].first==v[k-1].first){
				value.push_back(value.back());
				i--;temp--;
			}else{
				value.push_back(i);
			}
		}
		k++;
	}
	
	wow list[1000005];
		
	for(int i=0;i<n;i++){
		list[i].num=v[i].second;
		list[i].realgap=v[i].first;
		list[i].value=value[i];
	}
	stable_sort(list,list+n,cmp);
	
	for(int i=0;i<n;i++){
		printf("%d ",list[i].value);
	}
	
	return 0;
}

