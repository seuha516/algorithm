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

using namespace std;

vector <pair<int,int> > v;

int ccw(int x1,int y1,int x2,int y2,int x3,int y3){
	int temp=x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3;
	if(temp>0){
		return 1;
	}else if(temp==0){
		return 0;
	}else{
		return -1;
	}
}

int main(){
	int aa1,aa2,bb1,bb2,cc1,cc2; 
	scanf("%d %d %d %d %d %d",&aa1,&aa2,&bb1,&bb2,&cc1,&cc2);
	printf("%d",ccw(aa1,aa2,bb1,bb2,cc1,cc2));
	return 0;
}



