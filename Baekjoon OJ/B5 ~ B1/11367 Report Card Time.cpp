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
		char c[100]={0,}; int d;
		scanf("%s %d",&c,&d);
		
		string x;
		if(d>=97) x="A+";
		else if(d>=90)x="A";
		else if(d>=87)x="B+";
		else if(d>=80)x="B";
		else if(d>=77)x="C+";
		else if(d>=70)x="C";
		else if(d>=67)x="D+";
		else if(d>=60)x="D";
		else if(d>=0)x="F";
		
		printf("%s %s\n",c,x.c_str());
		
	}
	
	return 0;
}


