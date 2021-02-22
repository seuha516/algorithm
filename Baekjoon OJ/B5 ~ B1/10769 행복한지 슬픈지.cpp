#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main() {

	char c[400]={0,}; scanf("%[^\n]s",c);
	
	int a=0,b=0;
	
	for(int i=0;i<strlen(c);i++){
		
		if(c[i]==':'&&c[i+1]=='-'&&c[i+2]==')'){
			a++;
		}else if(c[i]==':'&&c[i+1]=='-'&&c[i+2]=='('){
			b++;
		}
		
	} 
	
	if(a==0&&b==0){
		printf("none");
	}else if(a==b){
		printf("unsure");
	}else if(a>b){
		printf("happy");
	}else if(a<b){
		printf("sad");
	}
		

return 0;}
