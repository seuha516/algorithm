#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 1

using namespace std;

int main(){
	
	int m,n; scanf("%d %d",&m,&n);
	vector<char> v;
	
	if(m==0){
		printf("0"); return 0;
	}	
	
	while(m){
		int x=m%n;
		char y;
		if(x<10){
			y=x+'0';
		}else{
			y=x-10+'A';
		}
		v.push_back(y);
		m/=n;	
	}
	
	for(int i=v.size()-1;i>=0;i--){
		printf("%c",v[i]);
	}
	
	
    return 0;
}
