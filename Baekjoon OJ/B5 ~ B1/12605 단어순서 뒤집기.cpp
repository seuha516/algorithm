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
#include <functional>
#include <stack>

using namespace std;

int main(){
	
	int t;scanf("%d",&t);int x=1;getchar();
	
	while(t--){
		char c[30]={0,};  cin.getline(c,30,'\n'); int end;
		
		for(int i=0;c[i]!=0;i++){
			end=i;
		}
		printf("Case #%d: ",x);
		
		for(int i=strlen(c)-1;i>=0;i--){
			if(c[i]==32){
				for(int j=i+1;j<=end;j++){
					printf("%c",c[j]);
				}printf(" ");
				end=i-1;
			}
		}
		for(int j=0;j<=end;j++){
			printf("%c",c[j]);
		}
		x++; printf("\n");
		
	}
		
	return 0;
}

