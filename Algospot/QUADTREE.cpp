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

int x_4[4]={-1,1,0,0}; int y_4[4]={0,0,-1,1};
int x_8[8]={-1,-1,-1,0,0,1,1,1}; int y_8[8]={-1,0,1,-1,1,-1,0,1};

int dap;

void hap(int* a,int* b,int c,int d){
	if((*b)+1 < c){
		dap=*b+1;	return; 
	}else{
		*b=d;
	}
}

string go(string s,int st){
	string ss[4];
	string ret;
	
	if(s[st]=='x'){
			ret+="x";
			st++;
			ss[0]=go(s,st);
			st+=ss[0].length();
			ss[1]=go(s,st);
			st+=ss[1].length();
			ss[2]=go(s,st);
			st+=ss[2].length();
			ss[3]=go(s,st);
			st+=ss[3].length();
		}else{
			ret+=s[st];
			return ret;
	}
	return ret+ss[2]+ss[3]+ss[0]+ss[1];
}


int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		string s; cin >> s;
		cout << go(s,0);
		printf("\n");
	}
	
    return 0;
}
