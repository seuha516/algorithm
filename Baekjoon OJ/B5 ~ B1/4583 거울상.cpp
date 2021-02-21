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
	while(1){
		string s; cin >> s; if(s=="#")break; int o=0;
		string x;
		for(int i=s.length()-1;i>=0;i--){
			char t=s[i];
			if(t=='b'){
				x+="d";
			}else if(t=='d'){
				x+="b";
			}else if(t=='p'){
				x+="q";
			}else if(t=='q'){
				x+="p";
			}else if(t=='i'||t=='v'||t=='o'||t=='w'||t=='x'){
				
				x+=t;
			}else{
				printf("INVALID\n"); o=1; break;
			}
		}
		if(o==0)cout << x << endl;
	}
	return 0;	
}



