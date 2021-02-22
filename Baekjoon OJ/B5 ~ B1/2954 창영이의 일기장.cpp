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
	
	char c[300]={0,};
	scanf("%[^\n]s",c);
	
	for(int i=0;c[i]!=0;i++){
		int x=c[i];
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
			i+=2;
		}
		printf("%c",x);
	}
	return 0;
}

