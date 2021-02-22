#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int a=1,b=0,c=0,t;
	char aa;
	while(1){
		scanf("%c",&aa);
		
		if(aa=='\n'){
			break;
		}else{
			if(aa=='A'){
				t=a;a=b;b=t;
			}else if(aa=='B'){
				t=b;b=c;c=t;
			}else if(aa=='C'){
				t=a;a=c;c=t;
			}
		}
	}
	if(a==1){
		printf("1");
	}else if(b==1){
		printf("2");
	}else{
		printf("3");
	}
	
	
	return 0;
}
