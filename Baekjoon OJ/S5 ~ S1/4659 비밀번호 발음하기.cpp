#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;


bool mo(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') return 1;
	return 0;
}

int main(){
	
	while(1){
		string s; cin >> s; getchar();
		if(s=="end")  break;
		bool ok[3]={0,}; ok[1]=1; ok[2]=1;
		for(int i=0;i<s.length();i++){
			if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u') ok[0]=1;
			if(i>0){
				if(s[i]==s[i-1] && (s[i]!='e' && s[i]!='o')) ok[1]=0;
			}
			if(i>1){
				if(mo(s[i])==mo(s[i-1]) && mo(s[i-1])==mo(s[i-2])) ok[2]=0;
			}
		}
		
		printf("<%s> is ",s.c_str());
		if(ok[0]&&ok[1]&&ok[2]) printf("acceptable.\n");
		else printf("not acceptable.\n");
	}
	
	
	return 0;
}


