#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>

using namespace std;

int main(){
	
	char c[150]={0,};
	scanf("%[^\n]s",c);
	
	for(int i=0;i<strlen(c);i++){
		int x=c[i];
		if(x>='A'&&x<='Z'){
			if(x+13>'Z'){
				printf("%c",x-13);
			}else{
				printf("%c",x+13);
			}
		}else if(x>='a'&&x<='z'){
			if(x+13>'z'){
				printf("%c",x-13);
			}else{
				printf("%c",x+13);
			}
		}else{
			printf("%c",x);		
		}
	}
	
	return 0;
}




