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
	
	long double dap;
	char c[20]={0,}; int  d, y,  h,  m , mon;
	scanf("%s %d, %d %d:%d",c,&d,&y,&h,&m);
	int ddd[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int aaa=365;
	
	if(y%400==0||(y%4==0&&y%100!=0)){
		ddd[1]=29; aaa++;
	}
	
	char c1[]="January";
	char c2[]="February";
	char c3[]="March";
	char c4[]="April";
	char c5[]="May";
	char c6[]="June";
	char c7[]="July";
	char c8[]="August";
	char c9[]="September";
	char c10[]="October";
	char c11[]="November";
	char c12[]="December";
	
	if(strcmp(c,c1)==0) mon=1;
	if(strcmp(c,c2)==0) mon=2;
	if(strcmp(c,c3)==0) mon=3;
	if(strcmp(c,c4)==0) mon=4;
	if(strcmp(c,c5)==0) mon=5;
	if(strcmp(c,c6)==0) mon=6;
	if(strcmp(c,c7)==0) mon=7;
	if(strcmp(c,c8)==0) mon=8;
	if(strcmp(c,c9)==0) mon=9;
	if(strcmp(c,c10)==0) mon=10;
	if(strcmp(c,c11)==0) mon=11;
	if(strcmp(c,c12)==0) mon=12;
	
	
	int temp=0;
	
	for(int i=0;i<mon-1;i++){
		temp+=ddd[i];
	}

	temp+=d; temp--;
	
	temp*=1440; temp+=h*60; temp+=m;
	
	printf("%0.15Lf",temp*100/(long double)(aaa*24*60));


		
	return 0;
}



