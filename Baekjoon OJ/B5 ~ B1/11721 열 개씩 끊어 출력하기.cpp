#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;
 

int main(){
	char c[200]={0,};int a=0;
	
	scanf("%s",&c);
		
	for(int i=0;c[i]!=0;i++){
		if(a<10){
			printf("%c",c[i]);a++;
		}else{
			a=0;printf("\n");i--;
		}
	}
	
	return 0;
}

