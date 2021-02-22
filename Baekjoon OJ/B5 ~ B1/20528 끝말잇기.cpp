#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 0

using namespace std;
int main(){
	
	int t; scanf("%d",&t);
	char tt; int x=1;
	while(t--){
		string s; cin >> s;
		if(x){
			tt=s[0];x=0;
		}else{
			if(tt!=s[0]){
				printf("0\n"); return 0;
			}
		}
		
	}	printf("1\n");
	
    return 0;
}
