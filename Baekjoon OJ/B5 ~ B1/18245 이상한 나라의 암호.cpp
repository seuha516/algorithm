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
	int x=1;
	while(1){
		char c[100000]={0,}; scanf("%[^\n]s",c);
		string s = c;
		if(s=="Was it a cat I saw?") return 0;
		for(int i=0;c[i]!=0;i+=x+1){
			printf("%c",c[i]);
		}printf("\n");
		getchar();
		
		x++;
	}
	
    return 0;
}
