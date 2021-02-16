#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <utility>

using namespace std;


int main(){
	
	int x; scanf("%d",&x);
	string s0="*";
	vector<string> S; S.push_back(s0);
	
	for(int i=0;i<x;i++){
		int Ssize=S.size();
		for(int j=0;j<Ssize;j++){
			string temp=S[j];
			for(int k=0;k<j;k++) S[j]+=" ";
			S[j]+=temp;
			S.push_back(temp);
		}
	}
	
	for(int i=0;i<(1<<x);i++){
		printf("%s",S[i].c_str());
		if(i!=(1<<x)-1) printf("\n"); 
	}
	
	return 0;
}

