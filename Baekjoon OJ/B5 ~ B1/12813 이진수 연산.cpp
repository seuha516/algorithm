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
#include <random>

using namespace std;

char d1[100002]={0,}; 
char d2[100002]={0,}; 
char d3[100002]={0,}; 
char d4[100002]={0,}; 
char d5[100002]={0,}; 

int main(){
	
	char c1[100002]={0,}; char c2[100002]={0,};
	scanf("%s",c1);
	scanf("%s",c2);
	
	for(int i=0;c1[i]!=0;i++){
		int x=c1[i]-48; int y=c2[i]-48;
		d1[i]=(x&y)+48;
		d2[i]=(x|y)+48;
		d3[i]=(x^y)+48;
		d4[i]=(1-x)+48;
		d5[i]=(1-y)+48;
	}
	printf("%s\n%s\n%s\n%s\n%s",d1,d2,d3,d4,d5);
	
	
return 0;}



