#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	char c[200]={0,};
	
	scanf("%s",c);
	for(int i=0;c[i]!=0;i++){
		int t=c[i];
		if(t>91){
			t-=32;
		}else{
			t+=32;
		}
		printf("%c",t);
	}

	return 0;

}

