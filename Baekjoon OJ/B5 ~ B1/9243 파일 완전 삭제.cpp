#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define TEST 1

using namespace std;

int main(){
	
	int x;scanf("%d",&x);
	string s1,s2; cin >> s1; cin >> s2;
	for(int i=0;i<s1.length();i++){
		s1[i]= (s1[i]=='0')? ((x%2)?'1':'0') : ((x%2)?'0':'1') ;
	}
	if(s1==s2){
		printf("Deletion succeeded");
	}else 	printf("Deletion failed");
	
    return 0;
}
