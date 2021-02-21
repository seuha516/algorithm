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

vector<string> v; int n; vector<string> d;

void go(int x,string st){
	if(x==n+1){
		v.push_back(st); return;
	}
	char c[3]={0,}; sprintf(c,"%d",x); string ret=c;
	go(x+1,st+"+"+ret); go(x+1,st+"-"+ret); go(x+1,st+" "+ret);
}

int check(string s){
	int now=0;
	int small=0;
	int booho=1;
	for(int i=0;i<s.length();i++){
		char x=s[i];
		
		if(i==s.length()-1){
			small*=10;
			small+=x-'0';
			now+=small*booho; break;
		}
		
		if(x=='+'){
			now+=small*booho; small=0; booho=1;
		}else if(x=='-'){
			now+=small*booho; small=0; booho=-1;
		}else if(x==' '){
			
		}else{
			small*=10;
			small+=x-'0';
		}
	}
	return now;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		while(!v.empty())v.pop_back(); while(!d.empty())d.pop_back();
		
		scanf("%d",&n);
		go(2,"1");
		
		for(int i=0;i<v.size();i++){
			if(check(v[i])==0){
				d.push_back(v[i]);
			}
		}
		sort(d.begin(),d.end());
		for(int i=0;i<d.size();i++){
			printf("%s\n",d[i].c_str());
		}
		printf("\n");
	}
}

