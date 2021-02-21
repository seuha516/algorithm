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

using namespace std;

vector <int> v;
int aa[8]={8,9,7,5,6,4,3,2};

int main(){	
	
	char c[100];
	
	while(1){
		for(int i=0;i<100;i++){
			c[i]=0;
		}
		scanf("%[^\n]s",c); getchar();
		if(strcmp(c,"***")==0){
			break;
		}
		int t=0;
		for(int i=0;c[i]!=0;i++){
			t++;
		}
		for(int i=t-1;i>=0;i--){
			if(c[i]==32){
				printf(" "); 
				continue;
			}
			printf("%c",c[i]);			
		}printf("\n");		
	}
	
	return 0;
}


