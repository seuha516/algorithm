#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>

using namespace std;
 

int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	a=min(a,min(b,c));d=min(d,e);
	a=a+d-50;
	printf("%d",a);
	return 0;
}

