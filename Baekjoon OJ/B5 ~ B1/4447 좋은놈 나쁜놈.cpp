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

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	while(n--){
		char c[29]={0,}; getchar();scanf("%[^\n]s",c); 
		int a=0,b=0;
		for(int i=0;c[i]!=0;i++){
			if(c[i]=='g'||c[i]=='G')a++;if(c[i]=='b'||c[i]=='B')b++;
		}	
		printf("%s is ",c);
		if(a==b){
			printf("NEUTRAL\n");
		}else if(a>b){
			printf("GOOD\n");
		}else{
			printf("A BADDY\n");
		}
	}
	
	return 0;
}


