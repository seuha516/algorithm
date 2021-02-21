#include <stdio.h>

int main()
{
    int a,b;scanf("%d %d",&a,&b);
    if(a>2&&b<5){
    	printf("TroyMartian\n");
	}
	if(a<7&&b>1){
		printf("VladSaturnian\n");
	}
	if(a<3&&b<4){
		printf("GraemeMercurian\n");
	}

    return 0;
}
