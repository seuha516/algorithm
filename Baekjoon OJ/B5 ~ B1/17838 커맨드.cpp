#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 0

using namespace std;

int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		string s; cin >> s;
		int len=s.length(); if(len!=7){
			printf("0\n"); continue;
		}
		if(s[0]==s[1]&&s[1]==s[4] && s[2]==s[3]&&s[6]==s[5]&&s[5]==s[3] && s[0]!=s[2]){
			printf("1\n");
		}else{
			printf("0\n");
		}
	}	
	
    return 0;
}
