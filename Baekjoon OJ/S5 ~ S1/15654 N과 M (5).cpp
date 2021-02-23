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

vector <int> v;

int arr[10];
bool visit[10005]={false};

void print(){
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}

int pr(int a, int b){
	if(v.size()==b){
		print();  visit[v.back()]=false; 
		v.pop_back(); 
		
		return 0;
	}
	for(int i=0;i<a;i++){
		if(visit[arr[i]]){
			continue;
		}else{
			v.push_back(arr[i]); visit[arr[i]]=true;
		}

		pr(a,b);

	}
	if(v.size()==0){
		return 0;
	}
	visit[v.back()]=false;
	v.pop_back();
	return 0;
	
}

int main() {
	
	int a,b; scanf("%d %d",&a,&b);
	
	for(int i=0;i<a;i++){
		scanf("%d",arr+i);		
	}
	sort(arr,arr+a);
	pr(a,b);
		
	
	return 0;
}
