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
#include <deque>

#define TEST 0
#define intmax 2147483647

using namespace std;

int main(){
	
	string s[8]={"000000","001111","010011","011100","100110","101001","110101","111010"};
	
	int x; scanf("%d",&x);
	string in; cin >> in;
	
	vector<char> v;
	
	for(int i=0;i<x;i++){
		string go=in.substr(i*6,6);
		int match=-1;
		for(int j=0;j<8;j++){
			int wrong=0;
			for(int k=0;k<6;k++){
				if(s[j][k]!=go[k])wrong++;
			}
			if(wrong<=1){
				match=j; break;
			}
		}
		if(match==-1){
			printf("%d",i+1); return 0;
		}else{
			v.push_back(match+'A');
		}
		
	}
	for(int i=0;i<x;i++){
		printf("%c",v[i]);
	}
	
	return 0;	
}



