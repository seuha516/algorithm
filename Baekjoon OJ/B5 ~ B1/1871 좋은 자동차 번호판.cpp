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

	int n; scanf("%d",&n);
	
	while(n--){
		
		char c[10]={0,};scanf("%s",c);
		string str=c;
	
		string s1=str.substr(0,3);
		string s2=str.substr(4,4);
		int t1=0;int t2=0;
		
		t1=(s1.at(0)-65)*676+(s1.at(1)-65)*26+(s1.at(2)-65);
		t2=(s2.at(0)-48)*1000+(s2.at(1)-48)*100+(s2.at(2)-48)*10+(s2.at(3)-48);
		
		if(abs(t1-t2)<=100){
			printf("nice\n");
		}else{
			printf("not nice\n");
		}
	}
	
	return 0;
}
 


