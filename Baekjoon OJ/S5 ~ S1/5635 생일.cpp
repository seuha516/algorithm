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

int price[102];

int main(){
	
	int t;scanf("%d",&t);
	
	int small=1<<30; int big=-1;
	string str1; string str2;
	
	while(t--){
		
		char name[100]; int a,b,c;
		
		scanf("%s %d %d %d",name,&a,&b,&c);
		int t=c*10000+b*100+c;
		
		if(t>big){
			big=t; str2=name;
		}
		if(t<small){
			small=t; str1=name;
		}
		
	}
	printf("%s\n%s",str2.c_str(),str1.c_str());

	return 0;
}



