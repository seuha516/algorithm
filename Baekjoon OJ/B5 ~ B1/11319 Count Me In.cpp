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

	int n;scanf("%d",&n);
	while(n--){
		char c[100]={0,}; getchar(); scanf("%[^\n]s",c);
		int t1=0,t2=0;
		for(int i=0;c[i]!=0;i++){
			int x=c[i];
			if(x=='A') t2++;
			else if(x=='E') t2++;
			else if(x=='O') t2++;
			else if(x=='I') t2++;
			else if(x=='U') t2++;
			else if(x=='a') t2++;
			else if(x=='e') t2++;
			else if(x=='o') t2++;
			else if(x=='i') t2++;
			else if(x=='u') t2++;
			else if(x!=' ')t1++;
		}
			printf("%d %d\n",t1,t2);
	}
	
	return 0;
}




