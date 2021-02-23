#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#define ll long long
#define ull unsigned long long

using namespace std;


int n,m; 
string s,t; 


int front[200099];
int back[200099];

void find_front(){
	int now=0;
	for(int i=0;i<n;i++){
		if(s[i]==t[now]){
			front[now]=i;		
			now++;
			if(now==m) break;
		}
	}
}
void find_back(){
	int now=m-1;
	for(int i=0;i<n;i++){
		if(s[n-i-1]==t[now]){
			back[now]=i;		
			now--;
			if(now==-1) break;
		}
	}
}

int main(){
	
	scanf("%d %d",&n,&m);
	cin >> s >> t;
	
	find_front();
	find_back();
	
	int dap=0;
	
	for(int i=0;i<m-1;i++){
		dap=max(dap,n-(front[i]+1)-(back[i+1]+1)+1);
	}
	printf("%d",dap);
	
	
	return 0;
}













