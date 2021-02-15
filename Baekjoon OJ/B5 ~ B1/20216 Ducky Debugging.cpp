#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main(){
	
	string s;
	while(1){
		getline(cin,s);
		if(s=="I quacked the code!") break;
		if(s[s.size()-1]=='.'){
			printf("\n*Nod*\n");
		}else{
			printf("\nQuack!\n");
		}
	}
	
	return 0;
}
