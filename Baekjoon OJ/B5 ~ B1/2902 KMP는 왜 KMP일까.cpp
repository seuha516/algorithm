#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	char c[200]={0};
	scanf("%s",c);
	int t=1;
	for(int i=0;c[i]!=0;i++){
		
		if(i==0){
			printf("%c",c[i]);t=0;
		}else{
			if(t==1){
				printf("%c",c[i]);t=0;
			}else if(c[i]==45){
				t=1;
			}
		}
	}
	

}

