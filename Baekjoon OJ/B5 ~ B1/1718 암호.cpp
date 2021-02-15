#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main(){
	
	string s,code;
	getline(cin,s);
	cin >> code;
	
	for(int i=0;i<s.size();i++){
		char x=code[i%code.size()]-'a'+1;
		char y=s[i];
		if(y==' ')printf(" ");
		else{
			y-=x;
			if(y<'a') y+=26;
			printf("%c",y);
		}
	}
	
	return 0;
}
