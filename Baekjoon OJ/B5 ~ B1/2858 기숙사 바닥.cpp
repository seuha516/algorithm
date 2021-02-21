#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>

using namespace std;
 
int main(){
	int a,b;scanf("%d %d",&a,&b);
	int axb=a+b;
	int aplusb=a/2+2;
	int apbsq=aplusb*aplusb;
	int ambsq=apbsq-4*axb;
	int aminusb=sqrt(ambsq);
	int aa=(aplusb+aminusb)/2;
	int bb=aplusb-aa;
	int reala=max(aa,bb);
	int realb=min(aa,bb);
	
	printf("%d %d",reala,realb);
	
	return 0;
}

