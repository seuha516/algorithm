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

using namespace std;

int alp[26];

int main(){
	
	char c[100]={0,}; scanf("%s",c);
	for(int i=0;c[i]!=0;i++){
		alp[c[i]-'A']++;
	}
	vector <char> v;
	
	int ok=2; char temp='x';
	
	for(int i=0;i<26;i++){
		if(alp[i]%2==0){
			alp[i]/=2;
		}else{
			ok--; temp=i+'A';
			alp[i]/=2;
		}
	}
	
	if(ok<=0){
		printf("I'm Sorry Hansoo");return 0;
	}
	
	
	for(int i=0;i<26;i++){
		for(int j=0;j<alp[i];j++){
			v.push_back(i+'A');
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		printf("%c",v[i]);
	}
	
	if(temp!='x'){
		printf("%c",temp);
	}
	
	for(int i=0;i<v.size();i++){
		printf("%c",v[v.size()-i-1]);
	}
	
	return 0;
}



