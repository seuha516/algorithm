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

using namespace std;

int go(string a,int x){
	if(a=="Mon")x+=0;
	else if(a=="Tue")x+=24;
	else if(a=="Wed")x+=48;
	else if(a=="Thu")x+=72;
	else if(a=="Fri")x+=96;
	else if(a=="Sat")x+=120;
	else x+=144;
	return x;
}

int main(){
	
	int t,n; scanf("%d %d",&t,&n);
	
	int time=0;
	for(int i=0;i<n;i++){
		string a,b; int x,y; cin>>a>>x>>b>>y;
		time+=go(b,y)-go(a,x);
	}
	if(time>=t){
		printf("0");
	}else if(t-time>48){
		printf("-1");
	}else{
		printf("%d",t-time);
	}
	
	return 0;	
}


