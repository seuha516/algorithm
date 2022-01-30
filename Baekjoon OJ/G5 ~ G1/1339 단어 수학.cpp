#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;

int ten[8]={1,10,100,1000,10000,100000,1000000,10000000};

int main(){
	int n; scanf("%d",&n);
	vector<int> v(30);
	for(int i=0;i<n;i++){
		string x;
		cin >> x;
		for(int j=0;j<x.length();j++){
			v[x[j]-'A']+=ten[x.length()-j-1];
		}
	}
	sort(v.begin(),v.end(),greater<>());
	int ans=0;
	for(int i=0;i<10;i++){
		ans+=v[i]*(9-i);
	}
	printf("%d",ans);
	
	return 0;
}
