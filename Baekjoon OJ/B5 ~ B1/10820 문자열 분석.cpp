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
	
	char cc[150]={0,};
	
	while(scanf("%[^\n]s",cc)!=EOF){
		int a=0,b=0,c=0,d=0;
		for(int i=0;i<strlen(cc);i++){
			char x; x=cc[i];
			if(x>='a' && x<='z') a++;
			else if(x>='A' && x<='Z') b++;
		else if(x>='0' && x<='9') c++;
			else d++;
		}
		printf("%d %d %d %d\n",a,b,c,d); getchar();
		
		for(int i=0;i<150;i++)cc[i]=0;
	}
	
    return 0;
}
