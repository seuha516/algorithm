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

#define TEST 1

using namespace std;

int cha_3(char a,char b,char c){
	if(a-b==b-c){
		if(a-b==0) return 1;
		else if(a-b==1 || a-b==-1) return 2;
		else return 5;
	}else if(a==c) return 4;
	else return 10;
}
int cha_4(char a,char b,char c,char d){
	if(a-b==b-c && b-c==c-d){
		if(a-b==0) return 1;
		else if(a-b==1 || a-b==-1) return 2;
		else return 5;
	}else if(a==c && b==d) return 4;
	else return 10;
}
int cha_5(char a,char b,char c,char d,char e){
	if(a-b==b-c && b-c==c-d && c-d==d-e){
		if(a-b==0) return 1;
		else if(a-b==1 || a-b==-1) return 2;
		else return 5;
	}else if(a==c && b==d && c==e) return 4;
	else return 10;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		string s; cin >> s;
		int dp[10005]={0,};
		
		dp[0]=987654321; dp[1]=987654321;
		dp[2]=cha_3(s[0],s[1],s[2]);
		dp[3]=cha_4(s[0],s[1],s[2],s[3]);
		dp[4]=cha_5(s[0],s[1],s[2],s[3],s[4]);
		
		int len=s.length();
		for(int i=5;i<len;i++){
			int a1,a2,a3;
			a1=dp[i-3]+cha_3(s[i-2],s[i-1],s[i]);
			a2=dp[i-4]+cha_4(s[i-3],s[i-2],s[i-1],s[i]);
			a3=dp[i-5]+cha_5(s[i-4],s[i-3],s[i-2],s[i-1],s[i]);
			dp[i]=min(a1,min(a2,a3));
		}
		
		printf("%d\n",dp[s.length() - 1]);
	}	
   
    return 0;
}
