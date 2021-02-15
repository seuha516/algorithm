#include <iostream>
#include <cmath>

using namespace std;

long double PI=2.0*acos(0.0);
long double a,b,c;
 
long double fx(long double x){return a*x+b*sin(x);}
long double find(long double st,long double end,int repeat){
	long double mid=(st+end)/2;
	if(repeat>10000000 || abs(fx(mid)-c)<1e-15) return mid;
	else if(fx(mid)<c) return find(mid,end,repeat+1);
	else return find(st,mid,repeat+1);
}

int main(){	
	scanf("%Lf %Lf %Lf",&a,&b,&c);
	long long dap=find((c-b)/a-0.01L,(c+b)/a+0.01L,0)*10000000;
	dap=dap/10+(dap%10>4?1:0);
	printf("%lld.%0.6lld",dap/1000000,dap%1000000);
	return 0;
}


