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

vector <pair<string,int> > v;

int main(){
	
	string num[10]=
	{"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
	
	int a,b; scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		
		string dap;
		if(i<10){
			dap=num[i];
		}else{
			dap=num[i/10]+num[i%10];
		}
				
		v.push_back(pair<string,int>(dap,i));
		
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i].second);
		if(i%10==9)printf("\n");
	}
	
	
	
return 0;}





