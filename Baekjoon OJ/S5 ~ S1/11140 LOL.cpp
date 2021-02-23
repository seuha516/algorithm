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

#define TEST 0

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		string s; cin >> s;		
		if(s.find("lol")!=string::npos) printf("0\n");
		else if (s.find("ll")!=string::npos ||s.find("lo")!=string::npos || s.find("ol")!=string::npos) printf("1\n");
		else if (s.length()>=3){
			int ok=0;
			for(int i=0;i<s.length()-2;i++){
				if(s[i]=='l' && s[i+2]=='l') ok=1;
			}
			if(ok){
				printf("1\n");
			}else{
				if(s.find("o")!=string::npos ||s.find("l")!=string::npos){
					printf("2\n");
				}else{
					printf("3\n");
				}
			}
		}else{
			if(s.find("o")!=string::npos ||s.find("l")!=string::npos){
				printf("2\n");
			}else{
				printf("3\n");
			}
		}
	}
	
    return 0;
}
