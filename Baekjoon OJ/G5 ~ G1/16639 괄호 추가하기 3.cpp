#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
	int n; string s; cin >> n >> s;
	vector<int> num;
	vector<int> op;
	for(int i=0;i<s.length();i++){
		if(i%2==0) num.push_back(s[i]-'0');
		else op.push_back(s[i]=='+'? 0 : (s[i]=='-'? 1 : 2));
	}
	int M[10][10], m[10][10];
	for(int i=0;i<10;i++){for(int j=0;j<10;j++){M[i][j]=-987654321; m[i][j]=987654321;}}
	for(int t=0;t<(n+1)/2;t++){
		for(int i=0;i+t<(n+1)/2;i++){
			int st=i, end=i+t;
			if(st==end) M[st][end]=m[st][end]=num[st];
			else{
				for(int j=st;j<end;j++){
					if(op[j]==0){
						M[st][end]=max(M[st][end],M[st][j]+M[j+1][end]);
						M[st][end]=max(M[st][end],M[st][j]+m[j+1][end]);
						M[st][end]=max(M[st][end],m[st][j]+M[j+1][end]);
						M[st][end]=max(M[st][end],m[st][j]+m[j+1][end]);
						m[st][end]=min(m[st][end],M[st][j]+M[j+1][end]);
						m[st][end]=min(m[st][end],M[st][j]+m[j+1][end]);
						m[st][end]=min(m[st][end],m[st][j]+M[j+1][end]);
						m[st][end]=min(m[st][end],m[st][j]+m[j+1][end]);
					}else if(op[j]==1){
						M[st][end]=max(M[st][end],M[st][j]-M[j+1][end]);
						M[st][end]=max(M[st][end],M[st][j]-m[j+1][end]);
						M[st][end]=max(M[st][end],m[st][j]-M[j+1][end]);
						M[st][end]=max(M[st][end],m[st][j]-m[j+1][end]);
						m[st][end]=min(m[st][end],M[st][j]-M[j+1][end]);
						m[st][end]=min(m[st][end],M[st][j]-m[j+1][end]);
						m[st][end]=min(m[st][end],m[st][j]-M[j+1][end]);
						m[st][end]=min(m[st][end],m[st][j]-m[j+1][end]);
					}else if(op[j]==2){
						M[st][end]=max(M[st][end],M[st][j]*M[j+1][end]);
						M[st][end]=max(M[st][end],M[st][j]*m[j+1][end]);
						M[st][end]=max(M[st][end],m[st][j]*M[j+1][end]);
						M[st][end]=max(M[st][end],m[st][j]*m[j+1][end]);
						m[st][end]=min(m[st][end],M[st][j]*M[j+1][end]);
						m[st][end]=min(m[st][end],M[st][j]*m[j+1][end]);
						m[st][end]=min(m[st][end],m[st][j]*M[j+1][end]);
						m[st][end]=min(m[st][end],m[st][j]*m[j+1][end]);
					}
				}
			}
		}
	}
	printf("%d",M[0][(n-1)/2]);
	
	return 0;
}

