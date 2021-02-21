#include <stdio.h>

int main()
{
	double a,b; scanf("%lf %lf",&a,&b);\
	double add= (b>=20.0) ? 20 : b;
	double add2= (b>=20.0) ? 0 : 20-b;
	double x=(b+add)/(100.0+add2-b)*a; printf("%lf",x);

    return 0;
}
