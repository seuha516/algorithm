#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
//#include <windows.h> 

#define TEST 1
#define SOSU_LIMIT 1000000

#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15 


using namespace std;

int main(){
	
	while(1){
		char c[1000]={0,};
		scanf("%[^\n]s",c); 
		if(c[0]=='#'&&c[1]==0)break;
		stack<char>s;
		for(int i=0;c[i]!=0;i++){
			if(c[i]==' '){
				while(!s.empty()){
					printf("%c",s.top()); s.pop();
				}printf(" ");
			}
			else{
				s.push(c[i]);
			}
		}
		while(!s.empty()){
			printf("%c",s.top()); s.pop();
		}
		printf("\n");
		getchar();
	}	
	return 0;

}


