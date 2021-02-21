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
	
	int a,b,c; char t1,t2; scanf("%d %c %d %c %d",&a,&t1,&b,&t2,&c);
	
	int d1,d2;
	int x1,x2,x3,x4;
	
	if(t1=='+'){
		x1=a+b;
	}else if(t1=='-'){
		x1=a-b;
	}else if(t1=='*'){
		x1=a*b;
	}else if(t1=='/'){
		x1=a/b;
	}
	if(t2=='+'){
		d1=x1+c;
	}else if(t2=='-'){
		d1=x1-c;
	}else if(t2=='*'){
		d1=x1*c;
	}else if(t2=='/'){
		d1=x1/c;
	}
	vector <int> v;
	v.push_back(d1);
	
	if(t2=='+'){
		x2=c+b;
	}else if(t2=='-'){
		x2=b-c;
	}else if(t2=='*'){
		x2=b*c;
	}else if(t2=='/'){
		x2=b/c;
	}
	if(t1=='+'){
		d2=x2+a;
	}else if(t1=='-'){
		d2=a-x2;
	}else if(t1=='*'){
		d2=x2*a;
	}else if(t1=='/'){
		d2=a/x2;
	}
	v.push_back(d2);
	sort(v.begin(),v.end());
	printf("%d\n%d",v[0],v[1]);
	
	
	return 0;
}

