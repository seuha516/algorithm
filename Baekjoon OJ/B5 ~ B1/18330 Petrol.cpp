#include <stdio.h>

int main()
{
	int a,b; scanf("%d %d",&a,&b); b+=60; int x=0;	if(a>b){
		x=b*1500 + (a-b)*3000;
	}else{
		x=a*1500;
	}printf("%d",x);

    return 0;
}
