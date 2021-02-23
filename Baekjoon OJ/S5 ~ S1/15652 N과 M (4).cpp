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

void print(){
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}

int aa(){
	if(v.size()==0){
		return 1;
	}else{
		return v.back();
	}
}

int pr(int a,int b){
	
	if(v.size()==b){
		print(); v.pop_back(); return 0;
	}
	
	for(int i=aa();i<=a;i++){
		v.push_back(i);
		pr(a,b);	
	}
	v.pop_back();
	return 0;
}


int main() {
	int a,b;scanf("%d %d",&a,&b);
	pr(a,b);
	return 0;
}
