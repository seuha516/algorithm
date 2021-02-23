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
#include <cstdlib>
#include <set>
#include <functional>
#include <stack>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	char c[100005]={0,};scanf("%s",c);
	
	int zero=0;
	int hap=0;
	vector <int> v;
	
	for(int i=0;c[i]!=0;i++){
		hap+=c[i]-48;
		if(c[i]==48)zero++;
		else v.push_back(c[i]-48);
	}
	if(hap%3!=0||zero==0){
		printf("-1");
	}else{
		sort(v.begin(),v.end());
		for(int i=v.size()-1;i>=0;i--){
			printf("%d",v[i]);
		}
		for(int i=0;i<zero;i++){
			printf("0");
		}
	}
	
return 0;}





