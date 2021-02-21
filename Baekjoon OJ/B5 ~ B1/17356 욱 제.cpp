#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>

using namespace std;
 

int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	double k=(b-a)/400; 
	double t=pow(10,k)+1;
	printf("%lf",1/t);
	return 0;
}

